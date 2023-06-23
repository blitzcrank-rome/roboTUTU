//Carrega a biblioteca do sensor
#include <Ultrasonic.h>
//Define os pinos para o trigger e echo
#define pino_trigger 6
#define pino_echo 5
//Inicializa o sensor nos pinos
Ultrasonic ultrasonic(pino_trigger, pino_echo);
void setup()
{
 Serial.begin(9600);
 Serial.println("Lendo dados do sensor");
}
void loop()
{
 float cmMsec;
 long microsec = ultrasonic.timing();
 cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
 //Exibe informacoes no serial monitor
 Serial.print("Distancia em cm: ");
 Serial.print(cmMsec);
 delay(1000);
}
