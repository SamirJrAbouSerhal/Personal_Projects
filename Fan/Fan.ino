//librarys used
#define ENABLE 5
#define DIR 3

//initializing pin numbers and logic variables
int button = 6;
int led = 7;
int low = 8;
int med = 9;
int high = 10;
bool slow = false;
bool medium = false;
bool fast = false;
bool on = false;

void setup() 
{
  //pin setup
  pinMode(ENABLE, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(low, INPUT_PULLUP);
  pinMode(med, INPUT_PULLUP);
  pinMode(high, INPUT_PULLUP);
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() 
{
  if (digitalRead(button) == LOW) //if statement to check if on button was pressed
  {
    on = !on; //inverts boolean to mark the pressing of the on button
    //ensures fan is off when button is first pressed
    slow=false;
    medium=false;
    fast=false;

    if (on == true)  //if the circuit is considered on, the motor is prepped and the LED is on
    {
      digitalWrite(DIR, HIGH);
      digitalWrite(led, HIGH);
    }
    if (on == false) //if the circuit is considered off, the motor and LED are off
    {
      digitalWrite(DIR, LOW);
      analogWrite(ENABLE, 0);
      digitalWrite(led, LOW);
    }
  }

  //the following three expression ensure the right boolean is true based off the pressed button
  if (digitalRead(low) == LOW && on==true) 
  {
    slow=true;
    medium=false;
    fast=false;
  }

  if (digitalRead(med)==LOW && on==true)
  {
    slow=false;
    medium=true;
    fast=false;
  }

  if (digitalRead(high)==LOW && on==true)
  {
    slow=false;
    medium=false;
    fast=true;
  }
  
  
  //the next three conditions choose the right speed for the fan depending on the previously activated boolean
  if (slow==true && on==true) 
  {
    analogWrite(ENABLE, 155);
  }
  
  if(medium==true && on==true)
  {
    analogWrite(ENABLE, 200);
  }
  
  if(fast==true && on==true)
  {
    analogWrite(ENABLE, 255);
  }

}
