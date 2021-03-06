/*
 This code will blink an LED attached to pin 7 on and off.
 It will stay on for 0.25 seconds.
 It will stay off for 1 second.
 */
#include <Metro.h> //Include Metro library
#define LED 7 // Define the led's pin

//Create a variable to hold theled's current state
int state = HIGH;

// Instanciate a metro object and set the interval to 250 milliseconds (0.25 seconds).
Metro ledMetro = Metro(250);

void setup()
{
  pinMode(LED,OUTPUT);
  digitalWrite(LED,state);
}

void loop()
{

  if (ledMetro.check() == 1) { // check if the metro has passed its interval .
    if (state==HIGH)  state=LOW;
    else state=HIGH;

    digitalWrite(LED,state);
  }
}
