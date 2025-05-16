// Casa Inteligente: Acender luz com botão (Simples)
// Autor: Gerado por Copilot

const int pinBotao = 2;
const int pinLed = 13;

void setup() {
  pinMode(pinBotao, INPUT_PULLUP); // Botão com resistor interno
  pinMode(pinLed, OUTPUT);
}

void loop() {
  if (digitalRead(pinBotao) == LOW) { // Botão pressionado
    digitalWrite(pinLed, HIGH);       // Acende LED
  } else {
    digitalWrite(pinLed, LOW);        // Apaga LED
  }
}