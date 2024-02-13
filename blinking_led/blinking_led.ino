// 
// Sample application using ESP-01S board with ESP8285 that blink on board LED
// every 1 second
//

void setup() {
  // Set GPIO2 as OUTPUT
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW); // Turn the LED on (Note that LOW is the voltage level
  // but actually the LED is on; this is because
  // it is acive low on the ESP-01S)
  delay(1000); // Wait for a second
  digitalWrite(LED_BUILTIN, HIGH); // Turn the LED off by making the voltage HIGH
  delay(2000); // Wait for two seconds (to demonstrate the active low LED)
}