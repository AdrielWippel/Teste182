#include <Arduino.h>

void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(115200);
  delay(1);
  Serial.println("Wake up! ");
}

void loop() {

  int i = 0;
  Serial.println("Início ");
  for (i = 0; i < 30; i++)
  {
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(200);
  Serial.println("Timer - oi");
  }
  
  Serial.println("Sleep ");
  delay(1);
  ESP.deepSleep(120e6);
}
