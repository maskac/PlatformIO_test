#include  "arduino.h"

void setup (void)
{
    pinMode(4,OUTPUT);
    Serial.begin(9600);
    Serial.print("Program INIT.....");
    delay(500);
    Serial.println("OK");
}


void loop (void)
{
    int i;
    for(i=1;i<=100;i++){
      Serial.print("Blink no....");
      Serial.print(i);
      Serial.print(" ON");
      digitalWrite(4,HIGH);
      delay(60);
      Serial.println(" OFF");
      digitalWrite(4,LOW);
      delay(1000);
    }

    delay(100);

}
