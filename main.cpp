#include <iostream>
#include<cstring>
#include "Payment.h"
#include"Creditcard.h"
#include "Paypal.h" 
#include "Vaccine.h"
using namespace std;

int main() {
  
    Creditcard *c1 = new Creditcard(0001,973,"Visa","10/2025");
    Creditcard *c2 = new Creditcard(0002,455,"Master","05/2025");
  
    c1->getcreditCardDetails();
    c2->getcreditCardDetails();
  
    Paypal *pp1 = new Paypal("Chamara2ekanayake@gmail.com","WWkky2#4");
    Paypal *pp2 = new Paypal("NadeeshaKaru6@gymail.com","vHsd65!!2");
  
    pp1->getpaypalDetails();
    pp2->getpaypalDetails();

    Reservation *myReservation;
 
    myReservation = new Reservation(150,"2021/05/14",1,1546,"Paypal",1500.00, 
100.00,"2021/05/14");
  
    myReservation->displayReservationDetails();

        Vaccine *v1 = new Vaccine(3112, "Moderna", 3400.00,"Manufacture date:21.04.2022 | Expire date:21.05.2022");
    Vaccine *v2 = new Vaccine(4300, "MMR ", 1200.00, "Manufacture date:05.03.2022 | Expire date:02.06.2022");

    v1->getVaccinationDetails();
    v2->getVaccinationDetails();
     
}

