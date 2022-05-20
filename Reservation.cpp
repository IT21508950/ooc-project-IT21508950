//IT2145882_Thilakarathna H.A.C.S.M
#include <iostream>
#include <cstring>
#include “Payment.h”

using namespace std;

Reservation::Reservation(){
  reservationID = 0000;
  strcpy(reservationDate,"");
  noOfReservations = 0;
  pay = new Payment(0000, "", 0000.00, 00.00, "");
}

Reservation::Reservation(int rID, const char rDate[], int nReservs, int payID,const char payType[],double payValue, double payDis,char payDate[]){
  reservationID = rID;
  strcpy(reservationDate,rDate);
  noOfReservations = nReservs;
  pay = new Payment(payID,payType,payValue,payDis,payDate);
}

void Reservation::displayReservationDetails(){
  cout<<"Reservation Details"<<endl;
  cout<<"\tReserve ID : "<<reservationID<<endl;
  cout<<"\tReserve Date : "<<reservationDate<<endl;
  cout<<"\tPay Amount : ";
  pay->getpaymentDetails();
}

void Reservation::updateReservation(){
 
}

void Reservation::cancelReservation(){
 
}

Reservation::~Reservation(){
  cout<<”Destructor Running”<<endl;
}
