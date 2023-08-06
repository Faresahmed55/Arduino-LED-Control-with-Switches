const int buttonPin1 = 6;   
const int buttonPin2 = 5;   

const int ledPin1 = 8;    
const int ledPin2 = 9;     
const int ledPin3 = 10;     
const int ledPin4 = 11;     
const int ledPin5 = 12;     
const int ledPin6 = 13;     

void setup() {
  
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}

void loop() {

 int buttonState1 = digitalRead(buttonPin1);
 int buttonState2 = digitalRead(buttonPin2);
  if (buttonState1 == HIGH) {
    digitalWrite(ledPin6, HIGH);  
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin1, LOW);
  } else {
    
    digitalWrite(ledPin6, LOW);
     digitalWrite(ledPin5, LOW);

  }

 
  if (buttonState2 == HIGH) {
    digitalWrite(ledPin2, HIGH);  
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, LOW);
  } else {
    digitalWrite(ledPin2, LOW);
  }
}
