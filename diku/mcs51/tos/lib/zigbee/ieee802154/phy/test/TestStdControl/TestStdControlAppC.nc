configuration TestStdControlAppC{
}
implementation {
	components TestStdControlP,MainC;
	MainC.Boot <- TestStdControlP;

	components PhyC;
	TestStdControlP.SplitControl -> PhyC.SplitControl;
}
