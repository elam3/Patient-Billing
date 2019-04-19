# Patient Billing

## Table Of Contents
* [Specification](#specification)
* [Design Decisions](#design-decisions)

---

## Specification

```
Compute a patient's bill for a hospital stay.

Different components:
- PatientAccount class
- Surgery class
- Pharmacy class
- main program

PatientAcount class
* keep a total of the patient's charges
* keep track of number of days spent in the hospital
* decide on a daily rate

Surgery class
* have charges for five types of surgery
* can update charges variable of the PatientAccount class

Pharmacy class
* will have prices of at least 5 types of medication
* can update the charges variable of the PatientAccount class

main program
* design a menu
  * allowing user to enter a type of surgery
  * and a type of medication
  * check out from hospital
    * upon checkout, total charges will be displayed
```

---

## Design Decisions

I wasn't sure on how to share the PatientAccount class's `total` variable with the Pharmacy & Surgery class. So I decided to make Pharmacy and Surgery a wrapper around an existing PatientAccount object. So Pharmacy and Surgery may invoke access/mutator functions to update a patient's charges.

Another point of conern I had while designing the classes was deciding/commiting to a way to manage the list of services within each class. For example, how will Surgery class's surgery types be managed and interacted with by other classes? Similarly for the Pharmacy class's medication types.

Initially, I thought I would make constant variables for each type surgery and medication type, then accessor and mutator functions for each. But I felt like this approach quickly became unwieldly. So I wanted to explore other solutions.

I was thinking that maybe this situation feels like a Factory Method kind of problem. Do I want to decouple creation and processing logic? On the one hand, I thought it would help make the system easier to extend. But on the other hand, I wasn't sure if having an entire class dedicated to a surgery type, and a medication type was necessary.

The next idea was to try to use an enum to fit the data. I don't know if this approach is any better, because the switch statements used to filter the enums still seemed a little hectic to maintain.

Next idea was to perhaps use a dictionary structure instead. But since we won't be using STL in class just yet, I thought it would be better to hold off on that idea for now and simply stick with the enum.
