//IT221894510_Jayawardena R.R.A.N.N
using namespace std;
class Vaccine {
public:
	int vaccineID;
	char vaccineName[30];
	double vaccinePrice;
	char vaccineDescription[100];
	Reservation* rID[2];
	User* user;

public:

	Vaccine();
	Vaccine(int rID , int rNo);
	Vaccine(int vID, const char vname[], double vPrice, const char vDescription[], User *vUser);
	void getVaccinationDetails();
	void displayReservation();
	void getPrice();
	~Vaccine();
};
