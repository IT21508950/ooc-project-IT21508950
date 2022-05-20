#include <iostream>
using namespace std; 

class Report
{
    private:
        int reportNo[10];
        
    public:
        Report();
        Report(int pReportNo[10]);
        void setVaccineReportDeatailsint (int pReportNo[]);
        void getVaccineReportDetails();
        ~Report();
};