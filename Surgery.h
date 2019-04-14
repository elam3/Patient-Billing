#ifndef SURGERY_H
#define SURGERY_H
#include "PatientAccount.h"
#include <iostream>
using namespace std;
#include <string>
class Surgery {
private:
    PatientAccount *patient;
public:
    enum Procedures {
	    HEART_VALUE_REPLACEMENT,
		HEART_BYPASS,
		SPINAL_FUSION,
		HIP_REPLACEMENT,
		KNEE_REPLACEMENT,
		ANGIOPLASTY,
		HIP_RESURFACING,
		GASTRIC_BYPASS,
		CORNEA,
		GASTRIC_SLEEVE
    };
    const double COST_HEART_VALVE_REPLACEMENT = 170000.0,
          COST_HEART_BYPASS = 123000.0,
          COST_SPINAL_FUSION = 110000.0,
          COST_HIP_REPLACEMENT = 40364.0,
          COST_KNEE_REPLACEMENT = 35000.0,
          COST_ANGIOPLASTY = 28200.0,
          COST_HIP_RESURFACING = 28000.0,
          COST_GASTRIC_BYPASS = 25000.0,
          COST_CORNEA = 17500,
          COST_GASTRIC_SLEEVE = 16000.0;
    Surgery(PatientAccount *patient);
	friend ostream& operator<<(ostream& os, Surgery::Procedures procedure);
	void acrueCostOf(Surgery::Procedures procedure);
};
#endif
