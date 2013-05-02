#include "Timer.h"

module TestLedPinC
{
  uses interface Leds;
 // uses interface GeneralIO as Led0;
  uses interface Boot;
  uses interface Spec4Leds;
}
implementation
{
 // task void toggle();
 // task void delay();

  task void lighton();
  event void Boot.booted() {
//    call Leds.led0On();
    //call Leds.led1On();

//    post delay();
      post lighton();
  }


  task void lighton(){
	call Leds.led0On();
	call Leds.led1On();

	call Spec4Leds.led0On();
	call Spec4Leds.led1On();
	call Spec4Leds.led2On();
	call Spec4Leds.led3On();
  }

/*
  task void delay() {
  uint16_t i,j;

  for (i=0 ; i<0x1FFU ; i++) {
    for (j=0 ; j<0xA0 ; j++) {
    }
  }
  post toggle();
  post delay();
  }
  task void toggle() {

    call Leds.led0Toggle();
    call Leds.led1Toggle();
  //  call Leds.led2Toggle();
  }
*/
}

