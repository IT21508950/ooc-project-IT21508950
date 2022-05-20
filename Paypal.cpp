#include <iostream>
#include <cstring>
#include "Paypal.h"

Paypal::Paypal(const char payEmail[],const char payPass[] )
{
  strcpy(paypalEmail,payEmail);
  strcpy(paypalPassword,payPass);
}

void Paypal::setpaypaltDetails(const char payEmail[],const char payPass[]){
    
 }
void Paypal::getpaypalDetails(){
  cout << "Paypal Email: " << paypalEmail<< endl;
	cout << "Paypal Passwrd : " << paypalPassword << endl;

}