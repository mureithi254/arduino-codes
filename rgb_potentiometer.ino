 //Declare the PWN pins;
 int RedLed = 9;
  int GreenLed = 10;
  int BlueLed = 11;

void setup() {
  // Declare the pins for the led as output
  pinMode(RedLed,OUTPUT);
  pinMode(GreenLed,OUTPUT);
  pinMode(BlueLed,OUTPUT);
}
void loop() {
  //read values from the potentiometer for RED color
  int redpot = analogRead(A0);
  int redmapped = map(redpot,0,1023,0,255);
  analogWrite(9,redmapped);

   //read values from the potentiometer for GREEN color
  int greenpot = analogRead(A2);
  int greenmapped = map(greenpot,0,1023,0,255);
  analogWrite(10,greenmapped);

   //read values from the potentiometer for BLUE color
  int bluepot = analogRead(A5);
  int bluemapped = map(bluepot,0,1023,0,255);
  analogWrite(11,bluemapped);


}
