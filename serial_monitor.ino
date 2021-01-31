void setup() {
  // initializes serial communication with a speed of 9600 bit/s
  Serial.begin(9600);
  

}

void loop() {
  // send a message to the serial port
  Serial.println("Hello my name is Dimobi Chinecherem Stephanie and my matric number is 16CJ020714");

  // wait for 3 seconds and then start over
  delay(3000);

}
