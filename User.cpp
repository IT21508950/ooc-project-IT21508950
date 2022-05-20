#include "User.h"
#include <cstring>

User::User()
    {
      UserID = 0;
      strcpy(userName,"");
      strcpy(userPassword,"");
    }

User::User(char pUserID[], char pUserName[], char pUserPassword[])
    {
      UserID = pUserID;
      strcpy(userName, pUserName);
      strcpy(userPassword, pUserPassword);
    } 

void User::updateUserDetails()

void User::setUserDetails(char pUserID[], char pUserName[], char pUserPassword[])
     {
        UserID = pUserID;
        strcpy(userName, pUserName);
        strcpy(userPassword, pUserPassword);
      }

void User::getUserDetails()
      {
  
      }

User::~User()
      {
	      cout << " User is deleted" << endl;
      }