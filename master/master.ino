HardwareSerial Sender(1);

#define Sender_Txd_pin 17
#define Sender_Rxd_pin 16

void setup() {
  Serial.begin(9600);
  Sender.begin(9600, SERIAL_8N1, Sender_Rxd_pin, Sender_Txd_pin);
}

void loop() {
  Sender.print("Ping!!");
  Serial.println("mengirim..");
  delay(2000);
  Serial.println("Menunggu jawaban..");
  if (Sender.available()) {                         // Wait for the Receiver to get the characters
    Serial.println(Sender.readString());
  };
}
