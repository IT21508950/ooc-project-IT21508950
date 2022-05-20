#include <iostream>
using namespace std; 

 class User
 {
     private:
        char userID [10];
        char userName[20];
        char userPassword[8];
    public:
        User();
        User(char pUserID[], char pUserName[], char pUserPassword[]);
        void updateUserDetails();
        void setUserDetails(char pUserID[], char pUserName[], char pUserPassword[]);
        void getUserDetails();
        ~User();
 };
