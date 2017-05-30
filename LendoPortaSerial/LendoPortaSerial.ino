int saidaPWM = 3;
char nextByte = 0;
char lendo = 0;
String valor;

void setup() {
  Serial.begin(9600);
  pinMode(saidaPWM,OUTPUT);
} ```````

void loop() {

  //0 sem caractere, 1 com caractere
  if(Serial.available() > 0) {

    nextByte = Serial.read();
    
    if(nextByte == 'B') {
      lendo = 1; // lendo -> true
      valor = "";
      
    } else if (nextByte == 'E') {
      lendo = 0; // lendo -> false
      analogWrite(saidaPWM, valor.toInt());

      Serial.print("Potencia PWM: ");
      Serial.println(valor.toInt(), DEC);
    
    } else if (lendo && nextByte >= '0' && nextByte <= '9') {
      valor += nextByte;
    }
    
  }
}
