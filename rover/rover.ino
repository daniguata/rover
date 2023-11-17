
/*para instalar libreria
-> Sketch
--> include library
---> manager library
----> buscar "adafruit motor shiel library"
*/
#include <AFMotor.h>

AF_DCMotor motor_del_der(1);
AF_DCMotor motor_atr_der(2);
AF_DCMotor motor_atr_izq(3);
AF_DCMotor motor_del_izq(4);
int contador=0;

void setup()
{
  motor_del_der.run(RELEASE);
  motor_atr_der.run(RELEASE);
  motor_atr_izq.run(RELEASE);
  motor_del_izq.run(RELEASE);
}

void loop()
{

  stop();
  if(contador==0)
  {
    delay(2000);
    delante();
    delay(2000);
    atras();
    delay(2000);
    derecha();
    delay(2000);
    izquierdo();
    delay(2000);
    contador=1;
  }
}

void velocidad(int x)
{
  motor_del_der.setSpeed(x);
  motor_atr_der.setSpeed(x);
  motor_atr_izq.setSpeed(x);
  motor_del_izq.setSpeed(x);
}

void stop()
{
  velocidad(0);
  motor_del_der.run(RELEASE);
  motor_atr_der.run(RELEASE);
  motor_atr_izq.run(RELEASE);
  motor_del_izq.run(RELEASE);
}
void delante()
{
  velocidad(180);
  motor_del_der.run(FORWARD);
  motor_atr_der.run(FORWARD);
  motor_atr_izq.run(FORWARD);
  motor_del_izq.run(FORWARD);
}
void atras()
{
  velocidad(180);
  motor_del_der.run(BACKWARD);
  motor_atr_der.run(BACKWARD);
  motor_atr_izq.run(BACKWARD);
  motor_del_izq.run(BACKWARD);
}
void derecha()
{
  velocidad(180);
  motor_del_der.run(BACKWARD);
  motor_atr_der.run(BACKWARD);
  motor_atr_izq.run(FORWARD);
  motor_del_izq.run(FORWARD);  
}
void izquierdo()
{
  velocidad(180);
  motor_del_der.run(FORWARD);
  motor_atr_der.run(FORWARD);
  motor_atr_izq.run(BACKWARD);
  motor_del_izq.run(BACKWARD);
}
