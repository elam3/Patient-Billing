#include "Pharmacy.h"
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    cout << "Instantiating a PatientAccount object...\n";
    PatientAccount patient(5);
    cout << "Instantiating a Pharmacy object...\n";
    Pharmacy phr(&patient);
    cout << "Patient total: " << patient.getTotal() << endl << endl;
    cout << "Prescribing ibuprofen...\n" << endl;
    phr.acrueCostOfIbuprofen();
    cout << "Patient total: " << patient.getTotal() << endl << endl;
    return 0;
}
