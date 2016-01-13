// Projeto 3 – Semáforo
int ledDelay = 2000;		 // espera entre as alterações
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  digitalWrite(redPin, HIGH);		// acende a luz vermelha
  digitalWrite(yellowPin, LOW);         // apaga a luz verde
  digitalWrite(greenPin, LOW);	        // acende a luz amarela
  delay(ledDelay);										 // espera 2 segundos
	
  digitalWrite(redPin, LOW);		// acende a luz vermelha
  digitalWrite(yellowPin, HIGH);         // apaga a luz verde
  digitalWrite(greenPin, LOW);	        // acende a luz amarela		
  delay(ledDelay);		

  digitalWrite(redPin, LOW);		// acende a luz vermelha
  digitalWrite(yellowPin, LOW);         // apaga a luz verde
  digitalWrite(greenPin, HIGH);	        // acende a luz amarela
  delay(ledDelay);			 // espera 2 segundos
																 // agora nosso loop se repete
}
