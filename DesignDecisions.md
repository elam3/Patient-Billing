# Design Decisions

## Patient Account
* The daily cost `COST_PER_INPATIENT_DAY` was chosen to be public because it is a constant variable. And I thought it would be more convenient to have it public rather than using an accessor method since it is immutable.
* I chose not to make a mutator function for the `total` because it didn't seem like a desireable behavior since allowing the modification of a patient's total cost would allow for shady or under the table practices. 
* TODO: rename total to running total? Because it excludes cost of stay.


## Surgery
* Should I do input validation and risk incomplete instantiation?

