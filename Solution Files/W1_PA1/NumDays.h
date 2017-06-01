#pragma once
class NumDays
{
private:
	double hours;
	double days;

	//Private member function to calculate days worked and store it in the days variable
	void calcDays();
public:
	//Default constructor, no arguments
	NumDays();
	//Constructor that accepts a double for number of hours worked
	NumDays(double);

	//Mutator Functions
	void setHours(double);
	void setDays(double);

	//Accessor Functions
	double getHours() const;
	double getDays() const;

	//Overloaded Operators
	NumDays operator+(const NumDays&);	//Addition operator
	NumDays operator-(const NumDays&);	//Subtraction operator
	NumDays operator++();		//Prefix ++ operator
	NumDays operator++(int);	//Postfix ++ operator
	NumDays operator--();		//Prefix -- operator
	NumDays operator--(int);	//Postfix -- operator

	//Destructor
	~NumDays();
};

