#include "SR04.h" //distance library
#include <LiquidCrystal.h> //LCD library

//pin definition
#define TRIG_PIN 3
#define ECHO_PIN 2
int buzzer=13;
int red=6;
int yellow=5;
int green=4;
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long distance;
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
   //initializing pins for devices
   Serial.begin(9600);
   pinMode(buzzer, OUTPUT);
   pinMode(red, OUTPUT);
   pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
   lcd.begin(16,2);
}

void loop() {
   distance=sr04.Distance(); //saving actual distance into a variable
   Serial.print(distance); //allows monitoring in the serial monitor
   Serial.println("cm");
   
   if (distance<10.0) //first if statement if object is too close (within 10 cm)
   {
      digitalWrite(red, HIGH); //red LED is turned on
      digitalWrite(yellow, LOW); //the other LEDs are off
      digitalWrite(green, LOW);
      digitalWrite(buzzer, HIGH); //Buzzer starts making noise
      delay(100); //delay is added to make alarm noise
      digitalWrite(buzzer, LOW);
      delay(100);
      //LCD screen is readied and displays message
      lcd.clear();
      lcd.print("STEP AWAY NOW!");
      lcd.setCursor(0, 1);
      lcd.print("0");
      lcd.setCursor(1, 1);
      lcd.print(distance);
      lcd.setCursor(3, 1);
      lcd.print("cm");
   }
   if (distance>=10.0 && distance<=20.0) //similar logic as the previous condition
   {
      digitalWrite(red, LOW);
      digitalWrite(yellow, HIGH);
      digitalWrite(green, LOW);
      digitalWrite(buzzer, HIGH);
      delay(450);
      digitalWrite(buzzer, LOW);
      delay(450);
      lcd.clear();
      lcd.print("You're too close");
      lcd.setCursor(0, 1);
      lcd.print(distance);
      lcd.setCursor(3, 1);
      lcd.print("cm");
   }
   if (distance>20.0) //similar conditions once again
   {
      digitalWrite(buzzer, LOW);
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, HIGH);
      lcd.clear();
      lcd.print("Hello! Have a");
      lcd.setCursor(0, 1);
      lcd.print("good day :)");
   }
   delay(100);
}
