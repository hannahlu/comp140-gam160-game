
int ledPin = 13;                // choose the pin for the LED
int inputPin = 2;               // choose the input pin (for PIR sensor)
int tiltState = LOW;             // we start, assuming no motion detected
int buttonval = 0;
int val = 0;                    // variable for reading the pin status
int Button = 7;

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
      // we have just turned on
      Serial.println("S1");
      // We only want to print on the output change, not state
      tiltState = HIGH;
    }
  } else {
      digitalWrite(ledPin, LOW); // turn LED OFF
      if (tiltState == HIGH){
      // we have just turned of
      Serial.println("S0");
      // We only want to print on the output change, not state
      tiltState = LOW;
    }
  }

}


