#ifndef EEPROMCONTROLLER_H
#define EEPROMCONTROLLER_H
class MemCon{
  public:
   float readFloat(unsigned int addr);
   void writeFloat(unsigned int addr, float x);
   void writeByte(unsigned int addr, byte x);
   byte getByte(unsigned int addr);
};
  
#endif
