#include <BluetoothSerial.h>
#include <Stepper.h>

//#define IN1 16
//#define IN2 4
//#define IN3 2
//#define IN4 15
//
//#define INA1 27
//#define INA2 14
//#define INA3 12
//#define INA4 13
//
//const int stepsPerRevolution = 500;
//Stepper myStepper(stepsPerRevolution, IN1, IN3, IN2, IN4);
//Stepper myStepper2(stepsPerRevolution, INA1, INA2, INA3, INA4); 

BluetoothSerial BTSerial;
// the setup routine runs on start and once when you press reset:
void setup() {
  // start bluetooth connection with the microcontroller
  BTSerial.begin("TEMP-ESP32");
  
//  myStepper.setSpeed(30);
//  myStepper2.setSpeed(30); 

  Serial.begin(9600);

}
int incomingByte = 0;

// the loop routine runs over and over again forever:
void loop() {
//  myStepper.step(-stepsPerRevolution);
//  myStepper2.step(stepsPerRevolution);

  
  if (BTSerial.available() > 0)
  {
    incomingByte = BTSerial.read();
//    Serial.println(incomingByte, DEC);
    Serial.write(incomingByte);
    
//    if (incomingByte == "RightON")
//      {
//         //myStepper.step(stepsPerRevolution);
//      }
//
//    if (incomingByte == "RightOFF")
//      {
//        //myStepper.step(-stepsPerRevolution);
//        
//      }
//
//    if (incomingByte == "LeftON")
//      {
//       //myStepper.step(stepsPerRevolution);
//      }
//
//    if (incomingByte == "LeftOFF")
//      {
//        //myStepper.step(-stepsPerRevolution);
//      }

    
  }


  
}
