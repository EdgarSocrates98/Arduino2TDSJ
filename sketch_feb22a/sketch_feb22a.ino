void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop() {
  //MEDIDOR DE LUMINOSIDADE
  int luz = analogRead(A1);
  Serial.print("Luminosidade:");
  Serial.println(luz);

  if(luz < 770){
    digitalWrite(5, HIGH); //nivel 1  
  }else{
    digitalWrite(5, LOW);  
  }
  
  delay(1);
    
}
