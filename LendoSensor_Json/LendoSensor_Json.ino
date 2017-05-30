#include <ArduinoJson.h>

const int LED = 3;
const int analog = 1;
char nextChar = 0;


void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  StaticJsonBuffer<200> buff;
  JsonObject& obj = buff.createObject();
  obj["luz"] = analogRead(A1);
  
  obj.printTo(Serial);
  Serial.println();
  delay(100);
}
