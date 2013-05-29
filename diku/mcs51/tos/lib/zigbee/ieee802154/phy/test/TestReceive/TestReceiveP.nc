module TestReceiveP{
	uses interface SplitControl;
	uses interface Boot;
	uses interface PD_DATA;

	uses interface Leds;
	uses interface StdOut;
}
implementation{
	
	event void Boot.booted(){
		call SplitControl.start();
	}

	event void SplitControl.startDone(error_t error){
	}
	event void SplitControl.stopDone(error_t error){
	}

	//stub code
	async event error_t PD_DATA.confirm(uint8_t status){
	}
	async event error_t PD_DATA.indication(uint8_t psduLength,uint8_t *psdu,int8_t ppduLinkQuality){
		uint8_t count = 0;

		call StdOut.print("I got sth\r\n");
		call StdOut.print("psduLength is :");
		call StdOut.printBase10uint16(psduLength);
		call StdOut.print("\r\n");
		call StdOut.print("the first byte is :");
		
		while ( count <  psduLength ){
			call StdOut.printBase10uint16(psdu[count]);
			call StdOut.print(" ");
			count++;
		}
		call StdOut.print("\r\n");
		call StdOut.print("link quality is :");
		call StdOut.printBase10uint16(ppduLinkQuality);
		call StdOut.print("\r\n");

		call Leds.led0Toggle();
	}

	async event void StdOut.get(uint8_t byte){
		call StdOut.printBase10uint16(byte);
	}
}
