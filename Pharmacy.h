#ifndef PHARMACY_H
#define PHARMACY_H
#include "PatientAccount.h"
class Pharmacy {
private:
    PatientAccount *patient;
public:
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
    void acrueCostOfAtorvastatin();
    void acrueCostOfLisinopril();
    void acrueCostOfLevothyroxine();
    void acrueCostOfAmlodipine();
    void acrueCostOfIbuprofen();
    void acrueCostOfAmoxicillin();
    void acrueCostOfAcetaminophen();
    void acrueCostOfOmeprazole();
    void acrueCostOfPrednisone();
    void acrueCostOfLosartan();
};
#endif
