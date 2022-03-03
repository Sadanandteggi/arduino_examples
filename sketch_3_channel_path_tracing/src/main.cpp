#include <Arduino.h>
int ledPin = 13;
int pathModuleLPin = 4;
int pathModuleCPin = 6;
int pathModuleRPin = 8;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

  
}

void loop() {
  int lOutPut = digitalRead(pathModuleLPin);
  int cOutPut = digitalRead(pathModuleCPin);
  int rOutPut = digitalRead(pathModuleRPin);
  if (lOutPut == HIGH) {
    Serial.println("L output High");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("L output Low");
    digitalWrite(ledPin, LOW);
  }
  if (cOutPut == HIGH) {
    Serial.println("C output High");
  } else {
    Serial.println("C output Low");
  }
  if (rOutPut == HIGH) {
    Serial.println("R output High");
  } else {
    Serial.println("r output Low");
  }
  delay(1000);
}