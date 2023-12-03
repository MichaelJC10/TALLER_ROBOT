#include "Motores.h"
#include "Maquina_Tracyectoria.h"

//DECLARACION DE DOS TAREAS PARA TENER MULTINUCLEO EN ESTE CASO 2
TaskHandle_t motores;
TaskHandle_t coneccion;

//FUNCIONES EN DONDE VAN A CORRER NUESTRAS TAREAS EN SIMULTANEO
void Motores(void *pvParameters);
void Coneccion(void *pvParameters);

//DECLARACION DE VARIABLES GLOBALES
//DECLARACION DE PINES
// Definicion de pines del motor izquierdo
#define motorIzquierdo1  33
#define motorIzquierdo2  32
#define velocidadIzquierdo 31
#define ledpin 2

// Definicion de pines del motor derecho
#define motorDerecho1  35
#define motorDerecho2  34
#define velocidadDerecho 30

void setup() {
  // Crear tareas
  xTaskCreatePinnedToCore(
    Motores,    // Función de la tarea
    "Control_Motores",   // Nombre de la tarea
    10000,     // Tamaño de la pila
    NULL,      // Parámetros de la tarea
    1,         // Prioridad de la tarea
    &motores,    // Manejador de la tarea
    0          // Núcleo (0 o 1)
  );

  xTaskCreatePinnedToCore(
    Coneccion,    // Función de la tarea
    "Bluetooth_Coneccion",   // Nombre de la tarea
    10000,     // Tamaño de la pila
    NULL,      // Parámetros de la tarea
    1,         // Prioridad de la tarea
    &coneccion,    // Manejador de la tarea
    1          // Núcleo (0 o 1)
  );

  //CONFIGURAR LOS PINES EN SALIDAS O ENTRADAS
  //PINES DE MOTOR
  pinMode(motorIzquierdo1,OUTPUT);
  pinMode(motorIzquierdo2,OUTPUT);
  pinMode(motorDerecho1,OUTPUT);
  pinMode(motorDerecho2,OUTPUT);
  pinMode(velocidadIzquierdo,OUTPUT);
  pinMode(velocidadDerecho,OUTPUT);
  pinMode(ledpin,OUTPUT);
  //PINES
}

void loop() { //EL LOOP NO SE OCUPARA POR AHORA
}

void Motores(void *pvParameters) { //TAREA DONDE VA A CORRER LA MAQUINA DE TRAYECTORIA CONTROLANDO LOS MOTORES
  (void) pvParameters; // Evitar advertencia de "no utilizado"

  for(;;) {
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
}

void Coneccion(void *pvParameters) { //TAREA DONDE VA A CORRER EL BLUETOOTH
  (void) pvParameters; // Evitar advertencia de "no utilizado"

  for (;;) {
    
  }
}
