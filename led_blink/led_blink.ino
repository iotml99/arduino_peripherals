void setup() {
  /** Code present in this section is executed once, initalize all peripherals,
  sensors, and modems in this function */

  /** GPIO pin connected to Builtin LED on board is configured as Output */
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  /** Code present in section runs forever, until the device runs */

  /** Turn the LED on, buy setting the output pin, delay, then toggle, delay */
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(1000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);                       
}
