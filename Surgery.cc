#include "Surgery.h"
Surgery::Surgery(PatientAccount *patient) {
    this->patient = patient;
}

void Surgery::acrueCostOf(Procedures procedure) {
	switch (procedure) {
		case Surgery::HEART_VALUE_REPLACEMENT:
			patient->addExpense(COST_HEART_VALVE_REPLACEMENT);
			break;
		case Surgery::HEART_BYPASS:
			patient->addExpense(COST_HEART_BYPASS);
			break;
		case Surgery::SPINAL_FUSION:
			patient->addExpense(COST_SPINAL_FUSION);
			break;
		case Surgery::HIP_REPLACEMENT:
			patient->addExpense(COST_HIP_REPLACEMENT);
			break;
		case Surgery::KNEE_REPLACEMENT:
			patient->addExpense(COST_KNEE_REPLACEMENT);
			break;
		case Surgery::ANGIOPLASTY:
			patient->addExpense(COST_ANGIOPLASTY);
			break;
		case Surgery::HIP_RESURFACING:
			patient->addExpense(COST_HIP_RESURFACING);
			break;
		case Surgery::GASTRIC_BYPASS:
			patient->addExpense(COST_GASTRIC_BYPASS);
			break;
		case Surgery::CORNEA:
			patient->addExpense(COST_CORNEA);
			break;
		case Surgery::GASTRIC_SLEEVE:
			patient->addExpense(COST_GASTRIC_SLEEVE);
			break;
		default:
			break;
	}
}

ostream& operator<<(ostream& os, Surgery::Procedures procedure) {
	switch (procedure) {
		case Surgery::HEART_VALUE_REPLACEMENT:
			os << "Heart Value Replacement";
			break;
		case Surgery::HEART_BYPASS:
			os << "Heart Bypass";
			break;
		case Surgery::SPINAL_FUSION:
			os << "Spinal Fusion";
			break;
		case Surgery::HIP_REPLACEMENT:
			os << "Hip Replacement";
			break;
		case Surgery::KNEE_REPLACEMENT:
			os << "Knee Replacement";
			break;
		case Surgery::ANGIOPLASTY:
			os << "Angioplasty";
			break;
		case Surgery::HIP_RESURFACING:
			os << "Hip Resurfacing";
			break;
		case Surgery::GASTRIC_BYPASS:
			os << "Gastric Bypass";
			break;
		case Surgery::CORNEA:
			os << "Cornea";
			break;
		case Surgery::GASTRIC_SLEEVE:
			os << "Gastric Sleeve";
			break;
		default:
			os.setstate(ios_base::failbit);
	}
	return os;
}
