const int ledPin = 13; // Pino do LED
const int button1Pin = 5; // Pino do primeiro botão
const int button2Pin = 8; // Pino do segundo botão

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
}

void loop() {
  // Verifica se o primeiro botão foi pressionado
  if (digitalRead(button1Pin) == LOW) {
    digitalWrite(ledPin, HIGH);
  }
  // Verifica se o segundo botão foi pressionado
  if (digitalRead(button2Pin) == LOW) {
    digitalWrite(ledPin, LOW);
  }
}
