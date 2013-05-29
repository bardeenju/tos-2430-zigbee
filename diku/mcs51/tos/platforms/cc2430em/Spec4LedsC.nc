configuration Spec4LedsC
{
	provides interface Spec4Leds;
}
implementation
{
	components Spec4LedsP,PlatformC;
	components HplMcs51GeneralIOC;

	components MainC;
	/*
	components HplMcs51GeneralIOC as Led1Pin;
	components NoPinC() as LedNoPin2;
	components NoPinC() as LedNoPin3;
	components NoPinC() as LedNoPin4;*/

	Spec4Leds = Spec4LedsP;
	//Spec4LedsP.Init <- PlatformLedsC.Init;  //by yj : which init method is better?
	MainC.SoftwareInit -> Spec4LedsP.Init;

	Spec4LedsP.Led0 -> HplMcs51GeneralIOC.P14;
	Spec4LedsP.Led1 -> HplMcs51GeneralIOC.P15;
	Spec4LedsP.Led2 -> HplMcs51GeneralIOC.P16;
	Spec4LedsP.Led3 -> HplMcs51GeneralIOC.P17;
	
}
