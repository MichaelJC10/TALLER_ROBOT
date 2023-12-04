#include "Maquina_Tracyectoria.h"
#include "Motores.h"
void ejecucionTrayectoria(bool recepcion, bool anomalia) {
	byte estado = 0;
	switch (estado) {
	case 0:
    digitalWrite(ledR, 1);
    digitalWrite(ledG, 0);
    digitalWrite(ledB, 0);
    parar();
    if(anomalia == true){
      estado = 0;
      recepcion = false;
      parar();
    }
		if (recepcion == true) {
			estado = 1;
      tiempo = millis();
      tiempo2 = millis();
		}
		break;
	case 1:
    digitalWrite(ledR, 0);
    digitalWrite(ledG, 1);
    digitalWrite(ledB, 0);
    if(tiempo - tiempo2 >= 100){
      avanzar();
    }
    if(tiempo - tiempo2 >= 4000){
      girarIzquierda();
    }
    if(tiempo - tiempo2 >= 8000){
      girarDerecha();
    }
    if(tiempo - tiempo2 >= 14000){
      parar();
    }
    if(tiempo - tiempo2 >= 20000){
      estado = 2;
      tiempo2 = millis();
    }
    if(anomalia == true){
      estado = 0;
      recepcion = false;
    }
    tiempo = millis();
		break;
	case 2:
    digitalWrite(ledR, 0);
    digitalWrite(ledG, 0);
    digitalWrite(ledB, 1);
		if(tiempo - tiempo2 >= 100){
      avanzar();
    }
    if(tiempo - tiempo2 >= 4000){
      girarIzquierda();
    }
    if(tiempo - tiempo2 >= 8000){
      girarDerecha();
    }
    if(tiempo - tiempo2 >= 14000){
      parar();
    }
    if(tiempo - tiempo2 >= 20000){
      estado = 3;
      tiempo2 = millis();
    }
    if(anomalia == true){
      estado = 0;
      recepcion = false;
    }
    tiempo = millis();
		break;
	case 3:
		digitalWrite(ledR, 1);
    digitalWrite(ledG, 1);
    digitalWrite(ledB, 0);
		if(tiempo - tiempo2 >= 100){
      avanzar();
    }
    if(tiempo - tiempo2 >= 4000){
      girarIzquierda();
    }
    if(tiempo - tiempo2 >= 8000){
      girarDerecha();
    }
    if(tiempo - tiempo2 >= 14000){
      parar();
    }
    if(tiempo - tiempo2 >= 20000){
      estado = 4;
      tiempo2 = millis();
    }
    if(anomalia == true){
      estado = 0;
      recepcion = false;
    }
    tiempo = millis();
		break;
	case 4:
    digitalWrite(ledR, 0);
    digitalWrite(ledG, 1);
    digitalWrite(ledB, 1);
		if(tiempo - tiempo2 >= 100){
      avanzar();
    }
    if(tiempo - tiempo2 >= 4000){
      girarIzquierda();
    }
    if(tiempo - tiempo2 >= 8000){
      girarDerecha();
    }
    if(tiempo - tiempo2 >= 14000){
      parar();
    }
    if(tiempo - tiempo2 >= 20000){
      estado = 5;
      tiempo2 = millis();
    }
    if(anomalia == true){
      estado = 0;
      recepcion = false;
    }
    tiempo = millis();
		break;
	case 5:
		digitalWrite(ledR, 1);
    digitalWrite(ledG, 0);
    digitalWrite(ledB, 1);
		if(tiempo - tiempo2 >= 100){
      avanzar();
    }
    if(tiempo - tiempo2 >= 4000){
      girarIzquierda();
    }
    if(tiempo - tiempo2 >= 8000){
      girarDerecha();
    }
    if(tiempo - tiempo2 >= 14000){
      parar();
    }
    if(tiempo - tiempo2 >= 20000){
      estado = 0;
      tiempo2 = millis();
      recepcion = false;
    }
    if(anomalia == true){
      estado = 0;
      recepcion = false;
    }
    tiempo = millis();
		break;
	}
}