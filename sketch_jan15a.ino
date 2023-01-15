#include <BluetoothSerial.h>

BluetoothSerial BTSerial;
void setup() {
  // put your setup code here, to run once:
  BTSerial.begin("TEMP-ESP32");
  Serial.begin(9600);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
}
int incomingByte = 0;

void loop() {
  // put your main code here, to run repeatedly:
  if (BTSerial.available() > 0)
  {
    
//      String data = BTSerial.readStringUntil('\n');
//      Serial.read() 

    incomingByte = BTSerial.read();
    Serial.write(incomingByte);
    
//    if (data == "LOCK")
//    {
//      digitalWrite(32, LOW);
//      digitalWrite(33, HIGH);
//    } 
//    
//    if (data == "UNLOCK")
//        {
//        digitalWrite(32, HIGH);
//        digitalWrite(33, LOW);
//        delay(2000);
//        digitalWrite(32, LOW);
//        digitalWrite(33, LOW);
//        }


  }
}
