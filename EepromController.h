#ifndef EEPROMCONTROLLER_H
#define EEPROMCONTROLLER_H
class MemCon{
  public:
   float readFloat(unsigned int addr);
   void writeFloat(unsigned int addr, float x);
};
  
#endif
