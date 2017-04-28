int buttonpin = 2;
int led = 8;
boolean state = false;
int previousstate = 0;
void setup() {
  //define pin#2 as input
  pinMode(buttonpin,INPUT);
  //define pin#13 as output for the led
  pinMode(led,OUTPUT);

}

void loop() {
  //Read the value of the input ,it can either be 1 or 0
  int buttonValue = digitalRead(buttonpin);
  if( buttonValue != previousstate){
     previousstate = buttonValue;
     if (buttonValue){
       if (state){
           digitalWrite(led,0);
             state = false;
        }
        else{
           digitalWrite(led,HIGH);
           state = true;
        }
      }
  }
                                                                                                        
}