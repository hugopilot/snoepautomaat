#ifndef EEPROMCONTROLLER_H
#define EEPROMCONTROLLER_H
static class MemCon{
  public:
   static float readFloat(unsigned int addr);
   static void writeFloat(unsigned int addr, float x);
   static void writeByte(unsigned int addr, byte x);
   static int getInt(unsigned int addr);
};
  
#endif
