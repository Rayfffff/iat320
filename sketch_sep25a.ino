int led = 9;
int brightness = 0;
int fadeAmount = 5;

void setup()
{
  //Set Pins 13, 9, and 7 as outputs.
  //Some Arduino Boards have a built-in LED on pin 13, while some have it on
  //pin 9 and others, like Adafruit FLORA, on 7
  //Enabling all 3 this way, we can support most, if not all, Arduino boards.
  pinMode(12, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);

  if (fadeAmount % 5 == 0){
    //Set the LED pins to HIGH. This gives power to the LED and turns it on
  digitalWrite(12, HIGH);
//  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  //Wait for a second
  delay(100);
  }
  
  //Set the LED pins to LOW. This turns it off
  digitalWrite(12, LOW);
//  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
}
