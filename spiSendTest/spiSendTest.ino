#include <SPI.h>

void setup(){
SPI.begin();
SPI.setBitOrder(MSBFIRST);
  SPI.setDataMode(SPI_MODE0);
  SPI.setClockDivider(SPI_CLOCK_DIV16);
}

void loop(){
SPI.transfer(0xAA);
delay(1000);
}
