configuration TestLedPinAppC
{
}
implementation
{
  components MainC, TestLedPinC, LedsC;
  components Spec4LedsC;

  TestLedPinC -> MainC.Boot;
  TestLedPinC.Leds -> LedsC.Leds;
  TestLedPinC.Spec4Leds -> Spec4LedsC.Spec4Leds;
}

