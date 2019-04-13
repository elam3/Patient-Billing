#include "Pharmacy.h"
#include "Surgery.h"
#include <iomanip>
#include <iostream>
using namespace std;

int getValidUserInput();

int main() {
    cout << fixed << setprecision(2);
    PatientAccount *patient = new PatientAccount();
    cout << "Welcome to the hospital, and how can we be of service?\n";
    //Choose a surgery type
    Surgery surgery(patient);
    cout << "What surgery did you have?\n";
    surgery.acrueCostOfCornea();
    //Choose a medication
    Pharmacy pharmacy(patient);
    cout << "What medication were you prescribed?\n";
    pharmacy.acrueCostOfIbuprofen();
    //Checkout from hospital
    cout << "Your medical bill totals to: $"
        << patient->getTotal()
            + patient->getLengthOfStay()
            * patient->COST_PER_INPATIENT_DAY
        << endl;
    delete patient;
    return 0;
}

