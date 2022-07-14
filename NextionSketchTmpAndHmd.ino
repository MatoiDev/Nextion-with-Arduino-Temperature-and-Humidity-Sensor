#include <SHT1x.h>
#include <SoftwareSerial.h>
#include <Nextion.h>

#define dataPin 7
#define clockPin 8


SoftwareSerial nextion(4, 5);

SHT1x sht1x(dataPin, clockPin);
Nextion myNextion(nextion, 9600);

void setup() {
  
  Serial.begin(9600);
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  
  myNextion.init();

}

void loop() {
  
  float temperature = sht1x.readTemperatureC();
  float humidity = sht1x.readHumidity();
  
  digitalWrite(2, true);
  digitalWrite(3, true);

  Serial.print("Temperature: ");
  Serial.println(temperature);
  Serial.print("Humidity");
  Serial.println(humidity);

  myNextion.setComponentText("t2", String(humidity));
  myNextion.setComponentText("t1", String(temperature));
  
}
