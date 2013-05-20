module TestSendP{
	uses interface SplitControl;
	uses interface Boot;
	uses interface PD_DATA;
	uses interface StdOut;
	uses interface Leds;
	uses interface Timer<TMilli>;
}
implementation{

uint8_t mypsdu[128] = {20,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
uint8_t mypsduLength = 20;

	event void Boot.booted(){
		//call Leds.led0On();
		call SplitControl.start();
		//call PD_DATA.request(psduLength,psduPtr);
		call StdOut.print("booted:\r\n");
		//call StdOut.printBase10uint16(psdu[0]);
		call StdOut.print("Timer started\r\n");
		call Timer.startPeriodic(100000);
	}
		
	uint8_t count = 0;
	  event void Timer.fired()
  	{
		uint8_t *psduPtr = mypsdu;
    		call Leds.led1Toggle();
		call PD_DATA.request(mypsduLength,psduPtr);
		call StdOut.printBase10uint16(count++);
		call StdOut.print("\r\n");
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

	async event void StdOut.get(uint8_t byte){
	}

	
}
