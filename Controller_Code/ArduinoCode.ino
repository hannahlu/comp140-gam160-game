
int ledPin = 13;                // input pin for LED (to check working)
int inputPin = 2;               // input pin for tilt sensor
int tiltState = LOW;             
int buttonval = 0;
int val = 0;                    
int Button = 7;                 // input pin for button

void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
  pinMode(Button,INPUT);
  Serial.begin(9600);
}

void loop(){
  Serial.println( );

buttonval = digitalRead(Button);
if(buttonval == HIGH)

{ Serial.println("B1");

}else{



}

  val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, HIGH);  // turn LED ON

    if (tiltState == LOW) {
     
      Serial.println("S1");
  
      tiltState = HIGH;
    }
  } else {
      digitalWrite(ledPin, LOW); // turn LED OFF
      if (tiltState == HIGH){
     
      Serial.println("S0");
      tiltState = LOW;
    }
  }

}


