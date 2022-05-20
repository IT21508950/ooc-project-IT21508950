//IT21440472_Waidyasekara D.S.H
#include <iostream>
#include <cstring>
#include “Payment.h”

void Feedback::setFeedbackDetails(char *fid,char *femail,char *fname,char *fmsg){
         
         fid = feedbackID;
         femail = feedbackEmail;
         fname = feedbackName;
         fmsg = feedbackMsg;
     }
    void Feedback::getFeedbackdetails(){

         return FeedbackDetails;
     
     }
    void Feedback::updateFeedback(){
      
     }
    void Feedback::display(){
      cout<<"Feedbck ID= "<<feedbackID<<endl;
      cout<<"Email address= "<<feedbackEmail<<endl;
      cout<<"Feedback= "<<feedbackMsg<<endl;
    }
    
    Feedback::~Feedback(){
      cout<<"Feedback Deleted"<<endl;
    }
