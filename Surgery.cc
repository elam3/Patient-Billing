#include "Surgery.h"
Surgery::Surgery(PatientAccount *patient) {
    this->patient = patient;
}

void Surgery::acureCostOfHeartValveReplacement() {
    patient->addExpense(COST_HEART_VALVE_REPLACEMENT);
}

void Surgery::acrueCostOfHeartBypass() {
    patient->addExpense(COST_HEART_BYPASS);
}

void Surgery::acrueCostOfSpinalFusion() {
    patient->addExpense(COST_SPINAL_FUSION);
}

void Surgery::acrueCostOfHipReplacement() {
    patient->addExpense(COST_HIP_REPLACEMENT);
}

void Surgery::acrueCostOfKneeReplacement() { 
    patient->addExpense(COST_KNEE_REPLACEMENT);
}

void Surgery::acrueCostOfAngioplasty() { 
    patient->addExpense(COST_ANGIOPLASTY);
}

void Surgery::acrueCostOfHipResurfacing() { 
    patient->addExpense(COST_HIP_RESURFACING);
}

void Surgery::acrueCostOfGastricBypass() { 
    patient->addExpense(COST_GASTRIC_BYPASS);
}

void Surgery::acrueCostOfCornea() { 
    patient->addExpense(COST_CORNEA);
}

void Surgery::acrueCostOfGastricSleeve() {
    patient->addExpense(COST_GASTRIC_SLEEVE);
}
