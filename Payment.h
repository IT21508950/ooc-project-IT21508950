class Payment{
  private:
     int paymentID;
     char paymentType[20];
     double paymentValue;
     double paymentDiscount;
     char paymentDate[30];

  public:
      Payment(int pID,const char pType[],double pValue,double pdis,const char pDate[]);
      void setpaymentDetails(int pID,const char pType[],double pValue,double pDis,const char pDate[]);
      void getpaymentDetails();
      ~Payment();  
};