#include "Surgery.h"
#include <iomanip>
#include <iostream>
using namespace std;

int main () {
    cout << fixed << setprecision(2);
    PatientAccount *patient = new PatientAccount(5);
    Surgery srg(patient);
    cout << "Acure Cost of Heart Valve Replacement...\n";
    srg.acureCostOfHeartValveReplacement();
    cout << "COST_OF_HEART_VALVE_REPLACEMENT: " << srg.COST_HEART_VALVE_REPLACEMENT << endl;
    cout << "Patient Total: " << patient->getTotal() << endl;
    cout << "Discharge Cost: " << patient->getTotal() + patient->getLengthOfStay() * patient->COST_PER_INPATIENT_DAY << endl;
    return 0;
}
