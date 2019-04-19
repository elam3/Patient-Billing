#include "Pharmacy.h"
#include "Surgery.h"
#include <limits>
#include <iomanip>
#include <iostream>
using namespace std;

void displaySurgery();
int getValidUserInput(const int, const int, string);
Surgery::Procedures intToSurgeryProcedure(int);

int main() {
    const int MIN_SURGERY_INDEX = 0,
          MAX_SURGERY_INDEX = 9;

    cout << fixed << setprecision(2);
    PatientAccount *patient = new PatientAccount();
    cout << "Welcome to the hospital, and how can we be of service?\n";

    //Choose a surgery type
    Surgery surgery(patient);
    displaySurgery();
    int userChosenSurgery = getValidUserInput(MIN_SURGERY_INDEX, MAX_SURGERY_INDEX, "What surgery did you have? (Index Number): ");
    surgery.acrueCostOf(intToSurgeryProcedure(userChosenSurgery));

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

    //cout << Surgery::SurgicalProcedures::HEART_BYPASS << endl;
    Surgery::Procedures p = Surgery::Procedures::HEART_BYPASS;
    cout << p << endl;
    cout << "Thank you for using our services.\n";

    delete patient;
    return 0;
}

void displaySurgery() {
    cout << "0. Heart Value Replacement\n"
        << "1. Heart Bypass\n"
        << "2. Spinal Fusion\n"
        << "3. Hip Replacement\n"
        << "4. Knee Replacement\n"
        << "5. Angioplasty\n"
        << "6. Hip Resurfacing\n"
        << "7. Gastric Bypass\n"
        << "8. Cornea\n"
        << "9. Gastric Sleeve\n"
        << endl;
}

Surgery::Procedures intToSurgeryProcedure(int num) {
    switch (num) {
        case 0:
            return Surgery::Procedures::HEART_VALUE_REPLACEMENT;
        case 1:
            return Surgery::Procedures::HEART_BYPASS;
        case 2:
            return Surgery::Procedures::SPINAL_FUSION;
        case 3:
            return Surgery::Procedures::HIP_REPLACEMENT;
        case 4:
            return Surgery::Procedures::KNEE_REPLACEMENT;
        case 5:
            return Surgery::Procedures::ANGIOPLASTY;
        case 6:
            return Surgery::Procedures::HIP_RESURFACING;
        case 7:
            return Surgery::Procedures::GASTRIC_BYPASS;
        case 8:
            return Surgery::Procedures::CORNEA;
        case 9:
            return Surgery::Procedures::GASTRIC_SLEEVE;
    }
}

int getValidUserInput(const int MIN, const int MAX, string prompt) {
    int userInput;
    bool isValidInput = false,
         isUnexpectedInput = false;
    do {
        cout << prompt;
        cin >> userInput;
        if (cin.fail()) {
            isUnexpectedInput = true;
            isValidInput = false;
        }
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        if (isUnexpectedInput) {
            cout << "Opps. Please choose an appropriate index number from the menu.\n";
            isUnexpectedInput = false;
        } else if (userInput < MIN || userInput > MAX) {
            cout << "The number you entered, " << userInput << " is out of range. Please try again.\n";
            isValidInput = false;
        } else {
            isValidInput = true;
        }
    } while (!isValidInput);
    return userInput;
}
