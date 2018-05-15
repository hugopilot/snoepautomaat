/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */


#ifdef MOVEMENTS_H
#define MOVEMENTS_H
class Movements{
  public:
  static void ReleaseProduct(Product product);
  static void RenewProduct(Product product);
  private:
  // value for the servo when opened
  const int servoOpenValue;

  // value for the servo when closed
  const int servoClosedValue;
}
#endif
