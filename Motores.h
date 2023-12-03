#ifndef MOTORES_H
#define MOTORES_H

#include "Arduino.h"

// Definicion de pines del motor izquierdo
#define motorIzquierdo1 33
#define motorIzquierdo2 32
#define velocidadIzquierdo 31

// Definicion de pines del motor derecho
#define motorDerecho1 35
#define motorDerecho2 34
#define velocidadDerecho 30

void avanzar();

void retroceder();

void girarIzquierda();

void girarDerecha();

void parar();
#endif
