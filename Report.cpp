#include "User.h"
#include <cstring>

Report::Report()
    {
      reportNo = 0;
    }

Report::Report(int pReportNo[10])
    {
      reportNo = pReportNo;
    } 

void Report::setVaccineReportDetails(int pReportNo[10])
    {
      reportNo = pReportNo;
    } 

void Report::getVaccineReportDetails()
    {
      
    }

Report::~Report()
      {
	      cout << " Report is deleted" << endl;
      }