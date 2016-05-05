int sensorPin = 2;        
int ledPin = 7;      

int state = HIGH;     
int reading;          
int previous = LOW;   

long time = 0;         
long debounce = 200;   

void setup() {
  Serial.begin(9600);
  Serial.println("Calibrating Sensor. Please wait.");
  for(int i = 0; i < 30; i++) {
    Serial.print("|");
    digitalWrite(ledPin,HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  Serial.println("\nCalibration successful.");
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  delay(500);
}

void loop() {
  reading = digitalRead(sensorPin);

  if (reading == HIGH && previous == LOW && millis() - time > debounce) {
    if (state == HIGH) {
      state = LOW;
      Serial.println("LED Off");
    }
    else {
      state = HIGH;
      Serial.println("LED On");
    }

    time = millis();    
  }

  digitalWrite(ledPin, state);

  previous = reading;
}
