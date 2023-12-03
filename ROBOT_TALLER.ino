#include "Motores.h"
#include "Maquina_Tracyectoria.h"

// Definicion de pines del motor izquierdo
#define motorIzquierdo1  33
#define motorIzquierdo2  32
#define ledpin 2

// Definicion de pines del motor derecho
#define motorDerecho1  35
#define motorDerecho2  34

#define velocidadIzquierdo 31
#define velocidadDerecho 30

void setup() {
  pinMode(motorIzquierdo1,OUTPUT);
  pinMode(motorIzquierdo2,OUTPUT);
  pinMode(motorDerecho1,OUTPUT);
  pinMode(motorDerecho2,OUTPUT);
  pinMode(velocidadIzquierdo,OUTPUT);
  pinMode(velocidadDerecho,OUTPUT);
  pinMode(ledpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin, 1);
  avanzar();
  
  delay(1000);
  digitalWrite(ledpin, 0);
  retroceder();
  delay(1000);
  digitalWrite(ledpin, 1);
  girarIzquierda();
  delay(1000);
  digitalWrite(ledpin, 0);
  girarDerecha();
  delay(1000);
  parar();
  delay(4000);
}