#include "Maquina_Principal"
#include "Motores.h"



void estados(bool pelota, bool destino) {
  // Verifica la presencia de la pelota
  byte estado =0;
 switch (estado){
	case 0:
    digitalWrite(ledR, 1);
    digitalWrite(ledG, 0);
    digitalWrite(ledB, 0);
    parar();
    if(pelota == true){
      estado = 1;
      recepcion = false;
      parar();
    }
  break;
  case 1: 
  
    // Si el led está activo, ejecuta el código siguiente
    switch (estado) {
       if  ( digitalWrite(ledR, 1);  )
        pelota=true;
        estado = 2;
            }
        } else { digitalWrite(ledR, 0););
        verEstado(estado);
        delay(ESPERA);
        break;
          estado = 0;
        }
       
      case 2:
        if{estado=2){
          
      void ejecucionTrayectoria;
          digitalWrite(ledR, 1);
    digitalWrite(ledG, 0);
    digitalWrite(ledB, 0);
        }  
   
     else{
       
     }     
       
          }}
      
      
  
  }
