configuration TestReceiveAppC{

}
implementation{
	components MainC,TestReceiveP;
	MainC.Boot <- TestReceiveP;

	components PhyC;
	TestReceiveP.SplitControl -> PhyC.SplitControl;

	TestReceiveP.PD_DATA -> PhyC.PD_DATA;

	components LedsC;
	TestReceiveP.Leds -> LedsC;

	components StdOutC;
	TestReceiveP.StdOut -> StdOutC;
	
}

