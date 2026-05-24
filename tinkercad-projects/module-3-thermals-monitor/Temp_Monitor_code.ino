int sensorPin = A0;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int raw = analogRead(sensorPin);
  float voltage = raw * (5.0 / 1023.0); //Converting the raw values recieved by A0 to voltage, multiplying with input voltage and dividng by number of bits
  float tempC = (voltage - 0.5) * 100.0; //Taking that voltage and subtracting 0.5 because 0 degrees Celcius corresponds to 0.5V amd dividing by 0.01 for each raise in voltage
  
  Serial.print("Raw Value: ");
  Serial.print(raw); //The Raw value given by the TMP36 to A0
  Serial.print(" | Voltage: ");
  Serial.print(voltage); //Raw value converted to voltage
  Serial.print(" V | Temperature: ");
  Serial.print(tempC); //From voltage converted to temperature in Celcius
  Serial.println(" °C");
  
  delay(500);
}