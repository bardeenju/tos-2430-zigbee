module TestSendP{
	uses interface SplitControl;
	uses interface Boot;
	uses interface PD_DATA;
}
implementation{
	
	event void Boot.booted(){
		uint8_t psduLength = 20;
		uint8_t psdu[128] = {20,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
		uint8_t *psduPtr = psdu;
		call SplitControl.start();
		call PD_DATA.request(psduLength,psduPtr);
	}

	event void SplitControl.startDone(error_t error){
	}
	event void SplitControl.stopDone(error_t error){
	}

	//stub code
	async event error_t PD_DATA.confirm(uint8_t status){
	}
	async event error_t PD_DATA.indication(uint8_t psduLength,uint8_t *psdu,int8_t ppduLinkQuality){
	}
}
