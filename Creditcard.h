//IT21508950_Yasarathne W.A.R.N
#include "Payment.h"
class Creditcard{
  private:
     int cardNo;
     int cvvNo;
     char cardType[20];
     char cardExpDate[30];
  public:
      Creditcard(int cNo,int cvv,const char cType[],const char ceDate[]);
      void setcreditCarddetails(int cNo,int cvv,const char cType[],const char ceDate[]);
      void getcreditCardDetails();
      ~Creditcard();  
};
