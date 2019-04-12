#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H
class PatientAccount {
private:
    double total; //hospital charges
    int lengthOfStay; //duration of hospitalization
public:
    const double COST_PER_INPATIENT_DAY = 2676.0;
    PatientAccount();
    PatientAccount(int lengthOfStay);
    double getTotal() const;
    int getLengthOfStay() const;
    void setLengthOfStay(int);
    void addExpense(double);
};
#endif
