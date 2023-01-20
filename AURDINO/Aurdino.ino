#include <SoftwareSerial.h>
#include<string.h>

int LED=6;    //pin for controlling LEDs
int buz=10;    //pin for controlling buzzer
int d=0;
unsigned long previousMillis = 0; 
const long interval = 200;  
unsigned long previousMillis2 = 0; 
const long interval2 = 30000;  

int ledState = LOW;    //initial LED state
int pumpState = LOW;   //initial water pump state
void setup()
{
    pinMode(LED, OUTPUT);      //initialise LED pin as OUTPUT
    pinMode(buz, OUTPUT);      //initialise buzzer pin as OUTPUT
    Serial.begin(9600);        //start serial communication with PC
}

void loop() {
    d=Serial.read();        //read output from PC

    if(d == 'p') {         //if fire detected
        digitalWrite(LED, HIGH);
        digitalWrite(buz, HIGH);
        delay(5);
    }

    if(d == 's' ) {        //if no fire detected
        digitalWrite(LED, LOW);
        digitalWrite(buz, LOW);
        delay(5);
    }
}
