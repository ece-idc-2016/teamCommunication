#include <SoftwareSerial.h>
const int TxPin = 9;
SoftwareSerial mySerial = SoftwareSerial(255, TxPin);
// XBEE
 #define Rx 2 // DOUT to pin 2- THIS WILL PROBABLY CHANGE
#define Tx 8 // DIN to pin 8
SoftwareSerial Xbee (Rx, Tx);
char ledVal=0; // define ledVal to be zero 
void setup() {
    // XBEE stuff here; CONFIGURE THIS TO YOUR SPECIFICATIONS 
 Serial.begin(9600); // Set to No line ending;
 Serial.println("here we go!");
  Xbee.begin(9600); // type a char, then hit enter
  delay(500); // wait half a second 
  pinMode(TxPin, OUTPUT);
  digitalWrite(TxPin, HIGH);
  mySerial.begin(9600);



}


void loop() {
  // put your main code here, to run repeatedly:
Serial.println("code is working");

 // ####### COPY CODE BELOW THIS LINE TO WHEREVER COMMUNICATION HAPPENS IN YOUR CODE 
int ledVal=' ';
int k=0;
    // communicate what we've found 
      if (cm > 30) // if 3-pointer..  . 
     {
         ledVal='m'; // return 0 
         // do something 
          // analogWrite(A0,255); // OR DON'T
           mySerial.write(12);                 // Clear    
          mySerial.write(17);                 // Turn backlight on
          delay(5);                           // Require  d delay
          mySerial.print("GOOOOOOLLD");  // First line    
          Serial.println("gold");
            Xbee.print(ledVal);
          
      }
      else if (cm >= 20 && cm <= 30) // if a two-pointer...
      {
       ledVal='n'; // return 1
       // do something 
       // analogWrite(A1,255); // OR DON'T 
        mySerial.write(12);                 // Clear    
          mySerial.write(17);                 // Turn backlight on
          delay(5);                           // Require  d delay
          mySerial.print("SILVER");  // First line    
            Xbee.print(ledVal);
      }
      else if(cm < 20)
      {
        ledVal='o';
        // do something 
           // analogWrite(A1,255);
           // analogWrite(A0,255);
            mySerial.write(12);                 // Clear    
          mySerial.write(17);                 // Turn backlight on
          delay(5);
          Xbee.print(ledVal);// Require  d delay
          mySerial.print("...bronze.");  // First line    
        
      }

// communications time 
 // char outgoing = 's'; // sets outgoing character to s
    while(k<5){
    Xbee.print(ledVal);
    // Xbee.print('o');
    delay(10);
    k+=1;
    Serial.println("sending");
    mySerial.write(12); // clear 
    mySerial.println("Sending...");
    }
 // wait for a bit 

 delay(100); // wait ten seconds or so

 if(Xbee.available()) { // Is data a vailable from XBee?
    char incoming = Xbee.read(); // Read character,
    // Serial.println(incoming); // send to Serial Monitor
mySerial.write(12); // clear 
    mySerial.write(17);
    delay(5);
    mySerial.print(incoming); // print whatever we've got 
    Serial.println(incoming);
}

Xbee.print(ledVal);


// ##### DON'T COPY ANYTHING BELOW THIS LINE 
}

// obviously 
