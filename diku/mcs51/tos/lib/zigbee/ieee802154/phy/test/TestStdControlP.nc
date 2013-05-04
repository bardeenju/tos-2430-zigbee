module TestStdControlP {
	uses interface SplitControl;
	uses interface Boot;
}
implementation {
	event void Boot.booted() {
		call SplitControl.start();
	}

	event void SplitControl.startDone(error_t error) {
	}

	event void SplitControl.stopDone(error_t error) {
	}
}
