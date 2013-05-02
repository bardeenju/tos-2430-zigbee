configuration TestLedPinAppC
{
}
implementation
{
  components MainC, TestLedPinC, LedsC;

  TestLedPinC -> MainC.Boot;
  TestLedPinC.Leds -> LedsC.Leds;
}

