#include "Payment.h"
class Paypal{
  private:
     char paypalEmail[20];
     char paypalPassword[20];

  public:
      Paypal(const char payEmail[],const char payPass[]);
      void setpaypaltDetails(const char payEmail[],const char payPass[]);
      void getpaypalDetails();
      ~Paypal();  
};
