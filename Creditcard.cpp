#include <iostream>
#include <cstring>
#include "Creditcard.h"
using namespace std;Creditcard::Creditcard(int cNo,int cvv,const char cType[],const char ceDate[] )
{
	cardNo = cNo;
  cvvNo= cvv;
  strcpy(cardType,cType);
  strcpy(cardExpDate,ceDate);
}

void Creditcard::setcreditCarddetails(int cNo,int cvv,const char cType[],const char ceDate[]){
    
 }
void Creditcard::getcreditCardDetails(){
  cout << "Creditcard Number: " << cardNo << endl;
	cout << "CVV Number : " << cvvNo << endl;
  cout << "Card Type: " << cardExpDate << endl;
	cout << "Expire Date: " << cardType << endl;

}
Creditcard::~Creditcard()
{
	cout << "CreditCard is deleted" << endl;
}

int main() {
  
    Creditcard *c1 = new Creditcard(0001,973,"Visa","10/2025");
    Creditcard *c2 = new Creditcard(0002,455,"Master","05/2025");
  
    c1->getcreditCardDetails();
    c2->getcreditCardDetails();
     
}
