#include "Pharmacy.h"

Pharmacy::Pharmacy(PatientAccount *patient) {
    this->patient = patient;
}

ostream& operator<<(ostream& os, Pharmacy::Drugs drug) {
    switch (drug) {
        case Pharmacy::Drugs::ATORVASTATIN:
            os << "Atorvastatin";
            break;
        case Pharmacy::Drugs::LISINOPRIL:
            os << "Lisinipril";
            break;
        case Pharmacy::Drugs::LEVOTHYROXINE:
            os << "Levothryoxine";
            break;
        case Pharmacy::Drugs::AMLODIPINE:
            os << "Amlodipine";
            break;
        case Pharmacy::Drugs::IBUPROFEN:
            os << "Ibuprofen";
            break;
        case Pharmacy::Drugs::AMOXICILLIN:
            os << "Amoxicillin";
            break;
        case Pharmacy::Drugs::ACETAMINOPHEN:
            os << "Acetaminophen";
            break;
        case Pharmacy::Drugs::OMEPRAZOLE:
            os << "Omeprazole";
            break;
        case Pharmacy::Drugs::PREDNISONE:
            os << "Prednisone";
            break;
        case Pharmacy::Drugs::LOSARTAN:
            os << "Losartan";
            break;
    }
    return os;
}

void Pharmacy::acrueCostOf(Pharmacy::Drugs drug) {
    double costOfDrug = 0.0;
    switch (drug) {
        case Drugs::ATORVASTATIN:
             costOfDrug = COST_ATORVASTATIN;
             break;
        case Drugs::LISINOPRIL:
             costOfDrug = COST_LISINOPRIL;
             break;
        case Drugs::LEVOTHYROXINE:
             costOfDrug = COST_LEVOTHYROXINE;
             break;
        case Drugs::AMLODIPINE:
             costOfDrug = COST_AMLODIPINE;
             break;
        case Drugs::IBUPROFEN:
             costOfDrug = COST_IBUPROFEN;
             break;
        case Drugs::AMOXICILLIN:
             costOfDrug = COST_AMOXICILLIN;
             break;
        case Drugs::ACETAMINOPHEN:
             costOfDrug = COST_ACETAMINOPHEN;
             break;
        case Drugs::OMEPRAZOLE:
             costOfDrug = COST_OMEPRAZOLE;
             break;
        case Drugs::PREDNISONE:
             costOfDrug = COST_PREDNISONE;
             break;
        case Drugs::LOSARTAN:
             costOfDrug = COST_LOSARTAN;
             break;
        default:
             break;
    }
    patient->addExpense(costOfDrug);
}

