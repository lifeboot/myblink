#include <Arduino.h>

void setup(){
    pinMode(3,INPUT);
    Serial.begin(9600);
}
void loop(){
    int val = digitalRead(3);
    delay(100);
    Serial.print("val:");
    Serial.println(val);
}