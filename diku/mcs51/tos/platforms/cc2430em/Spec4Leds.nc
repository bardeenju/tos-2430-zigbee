interface Spec4Leds{
	async command void led0On();
	async command void led1On();
	async command void led2On();
	async command void led3On();

	async command void led0Off();
	async command void led1Off();
	async command void led2Off();
	async command void led3Off();

	async command void led0Toggle();
	async command void led1Toggle();
	async command void led2Toggle();
	async command void led3Toggle();
}
