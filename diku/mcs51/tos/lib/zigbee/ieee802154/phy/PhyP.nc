/*
 * @author IPP HURRAY http://www.hurray.isep.ipp.pt/art-wise
 * @author Andre Cunha
 *
 */

#include "frame_format.h"

#include "phy_const.h"
#include "phy_enumerations.h"
 

module PhyP {

	provides interface SplitControl;
	// provides interface Test_send;
	
	
	//ieee802.15.4 phy interfaces
	provides interface PD_DATA;
	
	provides interface PLME_ED;
	provides interface PLME_CCA;
	provides interface PLME_SET;
	provides interface PLME_GET;
	provides interface PLME_SET_TRX_STATE;
	
	
	provides interface Init;
	
	//uses interface Resource;
	//uses interface CC2420Power;
	//uses interface CC2420Config;
	//uses interface StdControl as SubControl;
	
	uses interface Random;
	uses interface Leds;
	
	//uses interface Sendframe;
	
	//uses interface Receiveframe;
	
	//通过这两个接口使用2420的底层实现
	uses interface HALCC2420;
	uses interface StdControl as HALCC2420Control;
	
}

implementation {

	/****************************************
	 * TODO:为了通过编译，暂时实现HALCC2420中命令的stub代码
	 ***********************************************/


	//结束


	phyPIB phy_PIB;
	
	//transceiver current status
	//it can only be PHY_TRX_OFF, PHY_RX_ON and PHY_TX_ON
	uint8_t currentRxTxState = PHY_TRX_OFF;
	
	//message received
	//norace MPDU rxmpdu;
	MPDU *rxmpdu_ptr;

  
  error_t sendErr = SUCCESS;

  
  
  /** TRUE if we are to use CCA when sending the current packet */
  norace bool ccaOn;
  
  /****************** Prototypes ****************/
  task void startDone_task();
  task void stopDone_task();
  task void sendDone_task();
  
  void shutdown();



/***************** Init Commands ****************/
  command error_t Init.init() {
  
  //atomic rxmpdu_ptr = &rxmpdu;
  
  //TODO
  /*
  	//PHY PIB initialization
	//phy_PIB.phyCurrentChannel=INIT_CURRENTCHANNEL;
	phy_PIB.phyCurrentChannel=LOGICAL_CHANNEL;
	phy_PIB.phyChannelsSupported=INIT_CHANNELSSUPPORTED;
	phy_PIB.phyTransmitPower=INIT_TRANSMITPOWER;
	phy_PIB.phyCcaMode=INIT_CCA_MODE;
  */
  
    return SUCCESS;
  }


  /***************** SplitControl Commands ****************/
  command error_t SplitControl.start() {
   
		//arrancar o controlo
   
      //call CC2420Power.startVReg();
	call HALCC2420Control.start();
      	signal SplitControl.startDone(SUCCESS);	
	  	
      return SUCCESS;
    

  }

  command error_t SplitControl.stop() {
    //by yj : 为什么只是返回EBUSY?
    return EBUSY;
  }

  /***************** Send Commands ****************/
 	async event void HALCC2420.sendPacketDone(uint8_t * packet,error_t result){
	  atomic sendErr = result;
          post sendDone_task();  //by yj: in fact it does nothing	  
	}


/*TODO
    async event void Sendframe.sendDone(error_t error )
	{
	
	    atomic sendErr = error;
		post sendDone_task();
	
	}
  */
  
  

  /**************** Events ****************/
  
  
  /***************** Tasks ****************/
  task void startDone_task() {
  }

  task void sendDone_task() {
    error_t packetErr;
    atomic packetErr = sendErr;
	
   // signal Send.sendDone( m_msg, packetErr );
  }

  task void stopDone_task() {
    
    signal SplitControl.stopDone( SUCCESS );
  }
  
  
  /***************** Functions ****************/


  /***************** Defaults ***************/
  default event void SplitControl.startDone(error_t error) {
  }
  
  default event void SplitControl.stopDone(error_t error) {
  }
  
  

 /* TODO:收到数据时触发PD_DATA原语
  async event void Receiveframe.receive(uint8_t* frame, uint8_t rssi)
  {
  
    rxmpdu_ptr=(MPDU*)frame;
		
	signal PD_DATA.indication(rxmpdu_ptr->length,(uint8_t*)rxmpdu_ptr, rssi);
  }*/
	event uint8_t * HALCC2420.receivedPacket(uint8_t * packet,uint8_t rssi){
		rxmpdu_ptr = (MPDU*)packet; // TODO: by yj: 可以直接转换么，兼容否?
		signal PD_DATA.indication(rxmpdu_ptr->length,(uint8_t*)rxmpdu_ptr,rssi); //by yj : 底层HalCC2430RadioP中的接收代码需要修改---已修改
	}
  
  
  /*TODO:这个事件还需要吗
  event void CC2420Config.syncDone( error_t error )
  {
  return;
  }*/
  
  
/*****************************************************************************************************/  
/**************************************PD-DATA********************************************************/
/*****************************************************************************************************/  

//TODO:实现PD_DATA.request原语，即发送
async command error_t PD_DATA.request(uint8_t psduLength, uint8_t* psdu) {
	
	call HALCC2420.sendPacket(psdu);  //by yj: 不需要长度，因为psdu[0]即为帧长度,发送结束后触发 sendPacketDone(ptr,error)事件，CC2420_ERROR_TX或者CC2420_ERROR_CCA
	return SUCCESS;
	/*
	call Sendframe.send(psdu,psduLength);
	return SUCCESS;
	*/
}


/*****************************************************************************************************/  
/********************************************PLME-ED**************************************************/
/*****************************************************************************************************/  

command error_t PLME_ED.request(){
	//MAC asking for energy detection
	//TODO
	
	return SUCCESS;
}

/*****************************************************************************************************/  
/********************************************PLME-CCA*************************************************/
/*****************************************************************************************************/

command error_t PLME_CCA.request(){
//MAC asking for CCA
//TODO
		
	
	return SUCCESS;
}
 
/*****************************************************************************************************/  
/********************************************PLME-GET*************************************************/
/*****************************************************************************************************/

//TODO:PLME_GET原语,暂时注释掉，反正不影响，首先测试Control的连接
command error_t PLME_GET.request(uint8_t PIBAttribute){
//MAC asking for PIBAttribute value
  switch(PIBAttribute)
		{
			case PHYCURRENTCHANNEL:
				signal PLME_GET.confirm(PHY_SUCCESS, PIBAttribute, phy_PIB.phyCurrentChannel);
				break;

			case PHYCHANNELSSUPPORTED:
				signal PLME_GET.confirm(PHY_SUCCESS, PIBAttribute, phy_PIB.phyChannelsSupported);
				break;

			case PHYTRANSMITPOWER:
				signal PLME_GET.confirm(PHY_SUCCESS, PIBAttribute, phy_PIB.phyTransmitPower);
				break;
			case PHYCCAMODE:
				signal PLME_GET.confirm(PHY_SUCCESS, PIBAttribute, phy_PIB.phyCcaMode);
				break;
			default:
				signal PLME_GET.confirm(PHY_UNSUPPORTED_ATTRIBUTE, PIBAttribute, 0x00);
				break;
		}
		
  
  return SUCCESS;
  }
  
  
/*****************************************************************************************************/  
/********************************************PLME-SET*************************************************/
/*****************************************************************************************************/
//TODO:PLME_SET.request原语，在这个层面上也不需要大改动，但是在MAC层的事件中是否又有需要??那里的confirm什么都不做!!
command error_t PLME_SET.request(uint8_t PIBAttribute, uint8_t PIBAttributeValue){
  

	  //MAC is demanding for PHY to write the indicated PIB value
	  switch(PIBAttribute)
			{
				case PHYCURRENTCHANNEL:
					
					phy_PIB.phyCurrentChannel = PIBAttributeValue;
					
				//	call CC2420Config.setChannel(phy_PIB.phyCurrentChannel);
					
				//	call CC2420Config.sync();
					//by yj : 这里使用HALCC2420接口的功能来实现
					//TODO : 哪里还需要使用CC2420Config?
					call HALCC2420.setChannel(phy_PIB.phyCurrentChannel);
					
					//TunePreset(phy_PIB.phyCurrentChannel);
					signal PLME_SET.confirm(PHY_SUCCESS, PIBAttribute);
					break;
	
				case PHYCHANNELSSUPPORTED:
					phy_PIB.phyChannelsSupported = PIBAttributeValue;
					signal PLME_SET.confirm(PHY_SUCCESS, PIBAttribute);
					break;
	
				case PHYTRANSMITPOWER:
					phy_PIB.phyTransmitPower= PIBAttributeValue;
					//SetRFPower(phy_PIB.phyTransmitPower);
					signal PLME_SET.confirm(PHY_SUCCESS, PIBAttribute);
					break;
				case PHYCCAMODE:
					phy_PIB.phyCcaMode= PIBAttributeValue;
					signal PLME_SET.confirm(PHY_SUCCESS, PIBAttribute);
					break;
				default:
					signal PLME_SET.confirm(PHY_UNSUPPORTED_ATTRIBUTE, PIBAttribute);
					break;
			}
	  return SUCCESS;
	  
} 

/*****************************************************************************************************/  
/**********************************PLME_SET_TRX_STATE*************************************************/
/*****************************************************************************************************/

async command error_t PLME_SET_TRX_STATE.request(uint8_t state){


return SUCCESS;

}



}

