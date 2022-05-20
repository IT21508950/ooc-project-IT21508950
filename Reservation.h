#include payment.h

class Reservation{
  private:
    int reservationID;
    char reservationDate[10];
    int noOfReservations;

    Payment *pay;
  
  public:
    Reservation();
    Reservation(int rID, const char rDate[], int nReservs, int payID,const char 
payType[],double payValue, double payDis,char payDate[]); 
    void displayReservationDetails();
    void updateReservation();
    void cancelReservation();
    ~Reservation();
};