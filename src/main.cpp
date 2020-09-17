#include <Arduino.h>
#include <LiquidCrystal.h>
#include <Adafruit_Sensor.h>
#include "DHT.h"


LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
DHT dht11(30, DHT11);

float h = 0.0;
float c = 0.0;


void setup() {
  
  // configurando serial
  Serial.begin(9600);
  
  // configurando display
  lcd.begin(16, 2);
  lcd.clear();

  // configurando DHT
  dht11.begin();

}

void loop() {
  
  
  // printando dados da humidade

  h = dht11.readHumidity();

  if(isnan(h)) h = 0;

  Serial.print("Humid.: ");
  Serial.print(h);


  lcd.setCursor(0, 0);
  lcd.print("Humid.: ");
  lcd.print(h);

  c = dht11.readTemperature();

  if(isnan(c)) c = 0;
  Serial.print("Temp.:  ");
  Serial.print(c);
  Serial.println(" ˚C");

  lcd.setCursor(0, 1);
  lcd.print("Temp. : ");
  lcd.print(c);
  lcd.print(" C");
  delay(3000);

}