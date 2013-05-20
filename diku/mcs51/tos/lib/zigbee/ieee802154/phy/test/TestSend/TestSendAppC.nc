configuration TestSendAppC{

}
implementation{
	components MainC,TestSendP;
	MainC.Boot <- TestSendP;

	components PhyC;
	TestSendP.SplitControl -> PhyC.SplitControl;

	components StdOutC;
	TestSendP.PD_DATA -> PhyC.PD_DATA;
	
	components LedsC;
	TestSendP.Leds -> LedsC;
	TestSendP.StdOut -> StdOutC;

	components new TimerMilliC() as TimerC;
    	TestSendP.Timer -> TimerC;
}

