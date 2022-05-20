//IT21245206_Nuwanpriya K.M.A
#include "User.h"
#include <cstring>

Guest_User::Guest_User()
    {
      strcpy(name,"");
      strcpy(address,"");
      contactNumber = 0;
      strcpy(email,"");
      strcpy(nic,"");
      strcpy(dob,"");
    }

Guest_User::Guest_User(char pName [], char pAddress [], int pContactNumber, char pEmail [], char pNic [], char pDob [])
    {
      strcpy(name, pName);
      strcpy(address, pAddress);
      contactNumber = pContactNumber;
      strcpy(email, pEmail );
      strcpy(nic, pNic);
      strcpy(dob, pDob);
    } 

void Guest_User::setGuestUserDetails(char pName [], char pAddress [], int pContactNumber, char pEmail [], char pNic [], char pDob [])
    {
      strcpy(name, pName);
      strcpy(address, pAddress);
      contactNumber = pContactNumber;
      strcpy(email, pEmail );
      strcpy(nic, pNic);
      strcpy(dob, pDob);
    } 

void Guest_User::getGuestUserDetails()
      {
  
      }

Guest_User::~Guest_User()
      {
	      cout << " Guest User is deleted" << endl;
      }
