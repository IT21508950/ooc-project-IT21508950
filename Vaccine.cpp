//IT21894510_Jayawardena R.R.A.N.N
#include <iostream>
#include<cstring>
#include "Reservation.h"
#include"User.h"
#include"Vaccine.h"

Vaccine::Vaccine()
{
	rID[0] = new Reservation(1);
	rID[1] = new Reservation(2);
}

Vaccine::Vaccine(int rID[], int rNo)
{
	rID[0] = new Reservation(rID);
	rID[1] = new Reservation(rNo);
}
Vaccine::Vaccine(int vID, const char vname[], double vPrice, const char vDescription[], User *vUser)
{
	vaccineID = vID;
	strcpy(vaccineName, vname);
	vaccinePrice = vPrice;
	strcpy(vaccineDescription, vDescription);
	user = vUser;

}
void Vaccine::getVaccinationDetails()
{
	cout << "Vaccine ID           - " << vaccineID << endl;
	cout << "Vaccine name         - " << vaccineName << endl;
	cout << "Vaccine price        - " << vaccinePrice << endl;
	cout << "Vaccine Description  - " << vaccineDescription << endl;
}
void Vaccine::displayReservation()
{
	cout << "Reservation ID :" << reservationID << endl;


}
Vaccine::~Vaccine()
{
	cout << "Vaccination will be reset" << endl;
}
