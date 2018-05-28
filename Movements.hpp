/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */


#ifdef MOVEMENTS_H
#define MOVEMENTS_H
class Movements{
  public:
  // Functies die worden gebruikt buiten de class

  static void ReleaseAndRenew(Product product, int ClosedValue, int OpenValue);
  static void Release(Product product, int ClosedValue, int OpenValue);
  static void ClosePorts(Servo ports[]);
  
  private:
  // Een paar private functies die in de class worden gebruikt

  static void ReleaseProduct(Product product, int ClosedValue, int OpenValue);
  static void RenewProduct(Product product, int ClosedValue, int OpenValue);
  
  
  // value for the servo when opened
  const int servoOpenValue1;
  const int servoOpenValue2;
  // value for the servo when closed
  const int servoClosedValue1;
  const int servoClosedValue2;
}
#endif
