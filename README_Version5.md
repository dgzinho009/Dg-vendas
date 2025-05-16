# Projeto Casa Inteligente (Simples)

Este projeto simula uma casa inteligente básica usando Arduino. A automação consiste em acender uma luz (LED) quando um botão é pressionado.

## Componentes

- 1 Arduino Uno (ou compatível)
- 1 LED (simulando uma lâmpada)
- 1 resistor 220Ω para o LED
- 1 botão (push button)
- Jumpers

## Esquemático do Circuito

- O LED deve ser conectado ao pino 13 do Arduino, com resistor em série.
- O botão deve ser conectado ao pino 2 do Arduino (utilizando o resistor interno de pull-up).

Veja abaixo o diagrama ilustrativo:

```
LED (pino 13) ---[Resistor 220Ω]---|>|--- GND
Botão entre pino 2 e GND
```

No código, o pino 2 já usa o resistor pull-up interno do Arduino.

## Código

O código está no arquivo `CasaInteligente.ino`.

## Como funciona

- Quando o botão for pressionado, o LED acende.
- Quando soltar o botão, o LED apaga.

---

> Projeto gerado por Copilot conforme solicitação.