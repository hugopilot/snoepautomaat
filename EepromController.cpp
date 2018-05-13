#include <Arduino.h>
#include <EEPROM.h>
class MemCon{
  float readFloat(unsigned int addr)
  {
 union
 {
  byte b[4];
  float f;
 } data;
 for(int i = 0; i < 4; i++)
 {
  data.b[i] = EEPROM.read(addr+i);
 }
 return data.f;
  }
void writeFloat(unsigned int addr, float x)
  {
 union
 {
  byte b[4];
  float f;
 } data;
 data.f = x;
 for(int i = 0; i < 4; i++)
 {
  EEPROM.write(addr+i, data.b[i]);
}
}
};

