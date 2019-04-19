#ifndef PHARMACY_H
#define PHARMACY_H
#include "PatientAccount.h"
#include <iostream>
using namespace std;
class Pharmacy {
private:
    PatientAccount *patient;
public:
    enum Drugs {
        ATORVASTATIN,
        LISINOPRIL,
        LEVOTHYROXINE,
        AMLODIPINE,
        IBUPROFEN,
        AMOXICILLIN,
        ACETAMINOPHEN,
        OMEPRAZOLE,
        PREDNISONE,
        LOSARTAN
    };
    const double COST_ATORVASTATIN = 11.0,
          COST_LISINOPRIL = 5.0,
          COST_LEVOTHYROXINE = 10.0,
          COST_AMLODIPINE = 8.0,
          COST_IBUPROFEN = 14.0,
          COST_AMOXICILLIN = 8.0,
          COST_ACETAMINOPHEN = 14.0,
          COST_OMEPRAZOLE = 10.0,
          COST_PREDNISONE = 4.0,
          COST_LOSARTAN = 9.0;
    Pharmacy(PatientAccount *patient);
    friend ostream& operator<<(ostream& os, Pharmacy::Drugs drug);
    void acrueCostOf(Pharmacy::Drugs drug);
};
#endif
