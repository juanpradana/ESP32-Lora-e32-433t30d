HardwareSerial Receiver(1);

#define Sender_Txd_pin 17
#define Sender_Rxd_pin 16

void setup() {
  Serial.begin(9600);
  Receiver.begin(9600, SERIAL_8N1, Sender_Rxd_pin, Sender_Txd_pin);
}

void loop() {
 while (Receiver.available()) {                         // Wait for the Receiver to get the characters
    Serial.println(Receiver.readString());             // Display the result on the serial monitor
    Receiver.print("Masuk Bro");
  };
  delay(2000);
}
