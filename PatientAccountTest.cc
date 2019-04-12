#include "PatientAccount.h"
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    cout << "Initializing PatientAccount object: foo.\n";
    PatientAccount foo;
    cout << fixed << setprecision(2);
    cout << "foo's total: $" << foo.getTotal() << endl;
    cout << "foo's lengthOfStay: " << foo.getLengthOfStay() << " days." << endl;
    cout << endl;

    cout << "foo is hospitalized for 5 days:" << endl;
    foo.setLengthOfStay(5);
    cout << "foo's total: $" << foo.getTotal() << endl;
    cout << "foo's lengthOfStay: " << foo.getLengthOfStay() << " days." << endl;
    cout << "Discharge fee: $" << foo.COST_PER_INPATIENT_DAY * foo.getLengthOfStay() + foo.getTotal() << endl;
    return 0;
}
