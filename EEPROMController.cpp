#include <Arduino.h>
#include <EEPROM.h>
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
  void writeBytes(unsigned int addr, byte x[]){
    for(int i = 0; i < (sizeof(x)/sizeof(*x)); i++){
      EEPROM.write(addr + i, x[i]);
    }
  }
  static int getInt(unsigned int addr){
    return EEPROM.read(addr);
}
