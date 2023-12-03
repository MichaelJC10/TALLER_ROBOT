#include "Maquina_Tracyectoria.h"
#include "Motores.h"
void ejecucionTrayectoria(bool recepcion) {
	byte estado = 0;
  int tiempo = 0;
	switch (estado) {
	case 0:
    parar();
		if (recepcion == true) {
			estado = 1;
		}
		break;
	case 1:
		avanzar();
		if (tiempo == 3000) {
			estado = 2;
		}
		break;
	case 2:
		retroceder();
		if (tiempo == 5000) {
			estado = 3;
		}
		break;
	case 3:
		girarIzquierda();
		if (tiempo == 4000) {
			estado = 4;
		}
		break;
	case 4:
		girarDerecha();
		if (tiempo == 2000) {
			estado = 5;
		}
		break;
	case 5:
		avanzar();
		if (tiempo == 7000) {
			estado = 0;
		}
		break;
	}
}