#include "Maquina_Principal"
#include "Motores.h"




void estados( bool pelota) {
  // Verifica la presencia de la pelota
  if (digitalRead(led) == LOW) {
    parar
    estado = 1;
    
    // Puedes agregar más lógica relacionada al caso 6 si es necesario
  } else {
    // Si el led está activo, ejecuta el código siguiente
    switch (estado) {
      case :
        if (digitalwrite(ENABLE) == 0) {
          if (digitalwrite(B_IN) == 0) {
            estado = 0;
            
          } else {
            estado = 1;
          
          }
        } else {
          estado = 0;
      
        }
        digitalWrite(LED_V, LOW);
        verEstado(estado);
        delay(ESPERA);
        break;
      case 1:
        if (digitalRead(ENABLE) == 0) {
          if (digitalRead(B_IN) == 0) {
            estado = 2;
           
          } else {
            estado = 1;
          
          }
        } else {
          estado = 1;
          verSecuencia(0b0001);
        }
        digitalWrite(LED_V, LOW);
        verEstado(estado);
        delay(ESPERA);
        break;

      case 2:
      if (digitalRead(ENABLE) == 0) {
        if (digitalRead(B_IN) == 0) {
          estado = 0;
          
        } else {
          estado = 3;
         
        }
      } else {
        estado = 2;
        verSecuencia(0b0010);
      }
      digitalWrite(LED_V, LOW);
      verEstado(estado);
      delay(ESPERA);
      break;


      case 3:
        if (digitalRead(ENABLE) == 0) {
          if (digitalRead(B_IN) == 0) {
            estado = 2;
            
          } else {
            estado = 4;
            
          }
        } else {
          estado = 3;
          
        }
        digitalWrite(LED_V, HIGH);
        verEstado(estado);
        delay(ESPERA);
        break;
      case 4:
        // Lógica para el estado 4
        digitalWrite(LED_V, LOW);
        // Hacer sonar la alarma 4 veces
        for (int i = 0; i < 4; i++) {
          digitalWrite(BUZZER, HIGH);
          delay(500); // Sonido de la alarma durante 500 ms
          digitalWrite(BUZZER, LOW);
          delay(500); // Espera de 500 ms entre los sonidos
        }
        alarmCount = 4; // Establecer el contador en 4 para indicar que la alarma ha sonado 4 veces
        digitalWrite(LED_V, HIGH);
        delay(1000);
        // Cambiar a estado 0
        estado = 0;
     
        break;
      case 6:
        // Lógica para el caso 6 (error)
        // Aquí puedes agregar cualquier lógica específica para el caso 6
        break;
    }
  }
}
