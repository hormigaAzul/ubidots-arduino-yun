#include <UbidotsYUN.h>
#define TOKEN "YOUR_TOKEN_HERE"
#define ID "YOUR_ID_HERE"

Ubidots client(TOKEN);

void setup() {
  client.init();
  Serial.begin(9600);
}

void loop() {
  float value = client.getValue(ID);
}
