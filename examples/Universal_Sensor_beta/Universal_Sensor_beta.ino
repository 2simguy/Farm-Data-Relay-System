
//  FARM DATA RELAY SYSTEM
//
//  Basic Sensor Example
//
//  Developed by Timm Bogner (bogner1@gmail.com) for Sola Gratia Farm in Urbana, Illinois, USA.
//  An example of how to send data using "fdrs_sensor.h".
//


#include "sensor_setup.h"
#include "fdrs_sensor.h"

FDRSLoRa FDRS(GTWY_MAC,READING_ID,SPI_MISO,SPI_MOSI,SPI_SCK,LORA_SS,LORA_RST,LORA_DIO0,FDRS_BAND,FDRS_SF);

float data1;
float data2;

void setup() {
  FDRS.begin();
}
void loop() {
  data1 = readHum();
  FDRS.load(data1, HUMIDITY_T);
  data2 = readTemp();
  FDRS.load(data2, TEMP_T);
  FDRS.send();
  FDRS.sleep(10);  //Sleep time in seconds
}

float readTemp() {
  return 42.069;
}

float readHum() {
  return 21.0345;
}