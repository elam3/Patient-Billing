#include "Pharmacy.h"

Pharmacy::Pharmacy(PatientAccount *patient) {
    this->patient = patient;
}

void Pharmacy::acrueCostOfAtorvastatin() {
    patient->addExpense(COST_ATORVASTATIN);
}

void Pharmacy::acrueCostOfLisinopril() {
    patient->addExpense(COST_LISINOPRIL);
}

void Pharmacy::acrueCostOfLevothyroxine() {
    patient->addExpense(COST_LEVOTHYROXINE);
}

void Pharmacy::acrueCostOfAmlodipine() {
    patient->addExpense(COST_AMLODIPINE);
}

void Pharmacy::acrueCostOfIbuprofen() {
    patient->addExpense(COST_IBUPROFEN);
}

void Pharmacy::acrueCostOfAmoxicillin() {
    patient->addExpense(COST_AMOXICILLIN);
}

void Pharmacy::acrueCostOfAcetaminophen() {
    patient->addExpense(COST_ACETAMINOPHEN);
}

void Pharmacy::acrueCostOfOmeprazole() {
    patient->addExpense(COST_OMEPRAZOLE);
}

void Pharmacy::acrueCostOfPrednisone() {
    patient->addExpense(COST_PREDNISONE);

}

void Pharmacy::acrueCostOfLosartan() {
    patient->addExpense(COST_LOSARTAN);
}
