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

// #### YOU NEED TO COMMUNICATE YOUR STUFF ON YOUR OWN THAT'S NOT EVERYONE ELSE'S PROBLEM ("though I'll gladly help" -Jeffrey) 
   


// #### HOW TO RECEIVE COMMUNICATIONS STUFF: 

 // delay(100); // wait ten seconds or so

 if(Xbee.available()) { // Is data a vailable from XBee?
    char incoming = Xbee.read(); // Read character,
    Serial.println(incoming); // send to Serial Monitor for debugging purposes
    delay(5);
// a bunch of if statements for converting characters to binary: 

int value = 0; // this is patricia's doing it's probably good
    if (incoming == 'a' || incoming == 'd' || incoming == 'g' || incoming == 'j' || incoming == 'm') {
      value = value+2;
    }
    else if (incoming == 'b' || incoming == 'e' || incoming == 'h' || incoming == 'k' || incoming == 'n') {
      value++;
    }
    else if (incoming == 'c' || incoming == 'f' || incoming == 'i' || incoming == 'l' || incoming == 'o') {
     //value + 0;
    }
    
int x = value % 2; // modulus


// ...and then I think the rest would come under the category of "do it yourself mate" 





}

Xbee.print(ledVal);


// ##### DON'T COPY ANYTHING BELOW THIS LINE 
}

// obviously 
