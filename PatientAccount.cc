#include "PatientAccount.h"

PatientAccount::PatientAccount() {
    PatientAccount(0);
}

PatientAccount::PatientAccount(int lengthOfStay) {
    total = 0.0;
    this->lengthOfStay = lengthOfStay;
}

double PatientAccount::getTotal() const {
    return total;
}

int PatientAccount::getLengthOfStay() const {
    return lengthOfStay;
}

void PatientAccount::setLengthOfStay(int lengthOfStay) {
    if (lengthOfStay > 0)
        this->lengthOfStay = lengthOfStay;
}

void PatientAccount::addExpense(double fee) {
    if (fee > 0)
        total += fee;
}
