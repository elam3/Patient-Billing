#include "Pharmacy.h"
#include "Surgery.h"
#include <limits>
#include <iomanip>
#include <iostream>
using namespace std;

void displaySurgery();
int getValidUserInput(const int, const int, string);
Surgery::Procedures intToSurgeryProcedure(int);
void displayDrugs();
Pharmacy::Drugs intToPharmacyDrug(int);
void insertHorizontalRule();

int main() {
    const int MIN_SURGERY_INDEX = 0,
          MAX_SURGERY_INDEX = 9,
          MIN_DRUG_INDEX = 0,
          MAX_DRUG_INDEX = 9;
    cout << fixed << setprecision(2);

    cout << "Thank you for choosing our hospital!\n"
        << "\nPlease answer the following questionnaire for self-checkout:\n";

    insertHorizontalRule();

    int lengthOfStay = getValidUserInput(0, numeric_limits<int>::max(), "How many days did you stay in the hospital? ");
    PatientAccount *patient = new PatientAccount(lengthOfStay);
    cout << endl;

    insertHorizontalRule();

    //Choose a surgery type
    Surgery surgery(patient);
    cout << "What surgery did you have?\n";
    displaySurgery();
    int userChosenSurgery = getValidUserInput(MIN_SURGERY_INDEX, MAX_SURGERY_INDEX, "(Index Number): ");
    surgery.acrueCostOf(intToSurgeryProcedure(userChosenSurgery));

    insertHorizontalRule();

    //Choose a medication
    Pharmacy pharmacy(patient);
    cout << "What medication were you prescribed?\n";
    displayDrugs();
    int userChosenDrug = getValidUserInput(MIN_DRUG_INDEX, MAX_DRUG_INDEX, "(Index Number): ");
    pharmacy.acrueCostOf(intToPharmacyDrug(userChosenDrug));

    insertHorizontalRule();

    //Checkout from hospital
    cout << "Your medical bill totals to: $"
    << patient->getTotal()
        + patient->getLengthOfStay()
        * patient->COST_PER_INPATIENT_DAY
    << endl;

    cout << "\nThank you for using our services.\n";

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

void displayDrugs() {
    cout << "0. Atorvastatin\n"
        << "1. Lisinopril\n"
        << "2. Levothyroxine,\n"
        << "3. Amlodipine,\n"
        << "4. Ibuprofen,\n"
        << "5. Amoxicillin,\n"
        << "6. Acetaminophen,\n"
        << "7. Omeprazole,\n"
        << "8. Prednisone,\n"
        << "9. Losartan\n"
        << endl;
}

Pharmacy::Drugs intToPharmacyDrug(int num) {
    switch (num) {
        case 0:
            return Pharmacy::Drugs::ATORVASTATIN;
        case 1:
            return Pharmacy::Drugs::LISINOPRIL;
        case 2:
            return Pharmacy::Drugs::LEVOTHYROXINE;
        case 3:
            return Pharmacy::Drugs::AMLODIPINE;
        case 4:
            return Pharmacy::Drugs::IBUPROFEN;
        case 5:
            return Pharmacy::Drugs::AMOXICILLIN;
        case 6:
            return Pharmacy::Drugs::ACETAMINOPHEN;
        case 7:
            return Pharmacy::Drugs::OMEPRAZOLE;
        case 8:
            return Pharmacy::Drugs::PREDNISONE;
        case 9:
            return Pharmacy::Drugs::LOSARTAN;
    }
}

void insertHorizontalRule() {
    cout << "\n--------------------------------------------------\n\n";
}
