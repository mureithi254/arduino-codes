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
//a simple function that the sets the colors of the leds from 0 to 255
void SetColor(int redvalue,int greenvalue,int bluevalue){
  analogWrite(RedLed, 255 - redvalue);
  analogWrite(GreenLed , 255 - greenvalue);
  analogWrite(BlueLed , 255 - bluevalue);
 }

void loop() {
  // change a few colors
  SetColor(255,0,0); //Red color
  delay(500);

  SetColor(0,255,0); //set green color 
  delay(500);

  SetColor(0,0,255); //set blue color
  delay(500);

  SetColor(255,255,0);//set yellow color
  delay(500);

  SetColor(0,255,255);//set cyan color
  delay(500);

  SetColor(255,0,255);//set magenta color
  delay(500);

  SetColor(255,255,255);//set white color
  delay(500);
  

}
