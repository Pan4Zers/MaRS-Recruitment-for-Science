int buttonPin = 4;
int ledPin = 9;    

int buttonState = 0;  //Initialising the button state

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() 
{
  buttonState = digitalRead(buttonPin); //Placing the state of the buttonPin in a variable so that it can be used as an argument

  if (buttonState == HIGH) //Checking the status of the push button 
  {
    digitalWrite(ledPin, HIGH); //If the button is pressed then the LED turns ON
  } else 
  {
    digitalWrite(ledPin, LOW); //If the button is released then the LED will turn OFF
  }
}
