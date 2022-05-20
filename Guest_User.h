#include <iostream>
using namespace std; 

class Guest_User
{
    private:
        char name[20];
        char address[30];
        int contactNumber[10];
        char email[30];
        char nic[12];
        char dob[10]
        
    public:
        Guest_User();
        Guest_User(char pName [], char pAddress [], int pContactNumber, char pEmail [], char pNic [], char pDob []);
        void setGuestUserDetails(char pName [], char pAddress [], int pContactNumber, char pEmail [], char pNic [], char pDob []);
        void getGuestUserDetails();
        ~Guest_User();