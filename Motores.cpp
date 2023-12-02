#include "Motores.h"
// Definicion de pines del motor izquierdo
int motorIzquierdo1 = 25;
int motorIzquierdo2 = 26;

// Definicion de pines del motor derecho
int motorDerecho1 = 34;
int motorDerecho2 = 35;

void avanzar() {
	digitalWrite(motorIzquierdo1, HIGH);
	digitalWrite(motorIzquierdo2, LOW);
	digitalWrite(motorDerecho1, HIGH);
	digitalWrite(motorDerecho2, LOW);
}

void retroceder() {
	digitalWrite(motorIzquierdo1, LOW);
	digitalWrite(motorIzquierdo2, HIGH);
	digitalWrite(motorDerecho1, LOW);
	digitalWrite(motorDerecho2, HIGH);
}

void girarIzquierda() {
	digitalWrite(motorIzquierdo1, LOW);
	digitalWrite(motorIzquierdo2, HIGH);
	digitalWrite(motorDerecho1, HIGH);
	digitalWrite(motorDerecho2, LOW);
}

void girarDerecha() {
	digitalWrite(motorIzquierdo1, HIGH);
	digitalWrite(motorIzquierdo2, LOW);
	digitalWrite(motorDerecho1, LOW);
	digitalWrite(motorDerecho2, HIGH);
}