// LED conectado ao pino 10
int ledPin = 10;
// executa uma vez, quando o sketch inicia
void setup() {
  // define o pino como saída
  pinMode(ledPin, OUTPUT);
}
// executa repetidas vezes
void loop() {
  // 3 pontos
  for (int x=0; x<3; x++) {
    digitalWrite(ledPin, HIGH);	
    delay(150);									
    digitalWrite(ledPin, LOW);		
    delay(100);									
  }
  delay(100);
  // 3 traços
  for (int x=0; x<3; x++) {
    digitalWrite(ledPin, HIGH);	
    delay(400);									
    digitalWrite(ledPin, LOW);		
    delay(100);									
  }
  // espera 100ms para marcar o intervalo entre as letras
  delay(100);
  // 3 pontos novamente
  for (int x=0; x<3; x++) {
    digitalWrite(ledPin, HIGH);	
    delay(150);									
    digitalWrite(ledPin, LOW);		
    delay(100);									
  }	
  // espera 5 segundos antes de repetir o sinal de SOS
  delay(5000);
}
