#include "Motores.h"

void avanzar() {
	digitalWrite(motorIzquierdo1, 1);
	digitalWrite(motorIzquierdo2, 0);
	digitalWrite(motorDerecho1, 1);
	digitalWrite(motorDerecho2, 0);
}

void retroceder() {
	digitalWrite(motorIzquierdo1, 0);
	digitalWrite(motorIzquierdo2, 1);
	digitalWrite(motorDerecho1, 0);
	digitalWrite(motorDerecho2, 1);
}

void girarIzquierda() {
	digitalWrite(motorIzquierdo1, 0);
	digitalWrite(motorIzquierdo2, 1);
	digitalWrite(motorDerecho1, 1);
	digitalWrite(motorDerecho2, 0);
}

void girarDerecha() {
	digitalWrite(motorIzquierdo1, 1);
	digitalWrite(motorIzquierdo2, 0);
	digitalWrite(motorDerecho1, 0);
	digitalWrite(motorDerecho2, 1);
}

void parar(){
	digitalWrite(motorIzquierdo1, 0);
	digitalWrite(motorIzquierdo2, 0);
	digitalWrite(motorDerecho1, 0);
	digitalWrite(motorDerecho2, 0); 
};