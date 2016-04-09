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

int a=0; // "there's probably a cleaner way to do this but whatever" ~jeffrey
int b=0; 
int c=0; 
int d=0; 
int e=0; 
int f=0; 
int g=0; 
int h=0; 
int i=0; 
int j=0; 
int k=0; 
int l=0; 
int m=0; 
int n=0; 
int o=0; 

//  int {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o},=0; 

if(incoming=='a'){
    a=1;
}
else if(incoming=='b'){
    b=1;
}
else if(incoming=='c'){
    c=1; // ...you get the point. will add in other letters once I figure out if this actually works. 
}

int sum=a+b+c; // gotta add 'em all!
int x=sum % 2; // modulus 


// ...and then I think the rest would come under the category of "do it yourself mate" 





}

Xbee.print(ledVal);


// ##### DON'T COPY ANYTHING BELOW THIS LINE 
}

// obviously 
