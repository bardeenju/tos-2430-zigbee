configuration TestSendAppC{

}
implementation{
	components MainC,TestSendP;
	MainC.Boot <- TestSendP;

	components PhyC;
	TestSendP.SplitControl -> PhyC.SplitControl;

	TestSendP.PD_DATA -> PhyC.PD_DATA;
}

