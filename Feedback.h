class Feedback{
 private:
     char feedbackID[10];
     char feedbackEmail[30];
     char feedbackName[20];
     char feedbackMsg[60];
public:
     Feedback(){}
     Feedback(char feedID[10],char feedEmail[30],char feedname[20],char feedMssg[60]);
     void setFeedbackDetails(char fid[10],char femail[30],char fname[20], char fmsg[60]);
     void getFeedbackdetails();
     void display();
     void updateFeedback();
     
     ~Feedback();
   
};
