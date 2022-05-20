#include <iostream>
#include <cstring>
#include"Payment.h"
using namespace std;


Payment::Payment(int pID,const char pType[],double pValue,double pDis,const char pDate[] )
{
	paymentID = pID;
	strcpy(paymentType, pType);
	paymentValue = pValue;
  paymentDiscount= pDis;
  strcpy(paymentDate,pDate);
}
void Payment::setpaymentDetails(int pID,const char pType[],double pValue,double pDis,const char pDate[]){
  
        
}
void Payment::getpaymentDetails(){
  cout << "Paymentd ID: " << paymentID << endl;
	cout << "Paymentd Type: " << paymentType << endl;
	cout << "Payment Value : " << paymentValue << endl;
	cout << "Discount: " << paymentDiscount << endl;
	cout << "Date: " << paymentDate << endl;

 
}

Payment::~Payment()
{
	cout << "Payment is deleted" << endl;
}
