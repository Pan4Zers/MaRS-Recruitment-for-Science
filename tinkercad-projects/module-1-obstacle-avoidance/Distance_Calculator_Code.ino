int pingPin = 8;
int ledPin = 7;

long duration;
float distance;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  pinMode(pingPin, OUTPUT); //Sending a pulse

  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);

  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);

  digitalWrite(pingPin, LOW);

  pinMode(pingPin, INPUT); //Recieving an echo

  duration = pulseIn(pingPin, HIGH);

  distance = (duration * 0.0343) / 2; //Calculating distance in cm, we divide by 2 because of the soundwave travelling twice the dstance

  Serial.print("Distance: ");
  Serial.println(distance);
  Serial.print(" cm");

  if(distance <= 100) //Condition for LED to turn ON
  {
    digitalWrite(ledPin, HIGH); //If object is within 100cm
  }
  else
  {
    digitalWrite(ledPin, LOW); //If object is beyond 100cm
  }

  delay(100);
}