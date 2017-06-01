#include "NumDays.h"
using namespace std;

//Private member function to calculate and store the number of days worked when given hours
void NumDays::calcDays()
{
	//Determine the number of days worked based on an 8-hour day, and store the value in the days variable.
	//*Note*: hours is a double, so floating-point division should occur.
	days = hours / 8;
}

//Default constructor, sets hours and days to 0
NumDays::NumDays()
{
	hours = 0;
	days = 0;
}

//Constructor that accepts a double for the number of hours worked, and calculates the number of days based on hours
NumDays::NumDays(double h)
{
	hours = h;
	calcDays();
}

//Mutator Functions
void NumDays::setHours(double h)
{
	hours = h;			//Store the new value for hours in the hours variable
	calcDays();			//Use the private member function to recalculate the number of days worked
}

void NumDays::setDays(double d)
{
	days = d;			//Store the new value for days in the days variable
	hours = days * 8;	//Recalculate the number of hours based on an 8-hour day
						//*Note*: days and hours are doubles, so floating-point arithmetic should occur
						//and any partial day worked should also be included in hours
}

//Accessor Functions
double NumDays::getHours() const
{
	return hours;
}

double NumDays::getDays() const
{
	return days;
}

//Overloaded Operators

//Addition Operator
NumDays NumDays::operator+(const NumDays &right)
{
	NumDays temp;

	temp.hours = hours + right.hours;		//Add the hours of the instance of NumDays calling the function and the hours of the instance on the right side of the + operator
	temp.calcDays();						//Calculate the days based on the number of hours now stored in temp
	return temp;							//Return the new instance of NumDays
}

//Subtraction operator
NumDays NumDays::operator-(const NumDays &right)
{
	NumDays temp;

	temp.hours = hours - right.hours;		//Subtract the hours of the instance on the right of the - operator from the hours of the instance of NumDays calling the function
	if (temp.hours < 0)
		temp.hours = 0;						//Validation: cannot have a negative number of hours, just set hours to 0 in this case
	temp.calcDays();						//Calculate the days based on the number of hours now stored in temp
	return temp;
}

//Prefix ++ operator
NumDays NumDays::operator++()
{
	++hours;			//Increment the number of hours of the instance of NumDays that called the function
	calcDays();			//Recalculate the number of days worked based on the new number of hours
	return *this;		//Return a pointer to the instance of the NumDays object that called the function, in case it is needed in a statement
}

//Postfix ++ operator
NumDays NumDays::operator++(int)
{
	NumDays temp;		//Hold onto a copy of the instance of the NumDays object that called the function
	hours++;			//Increment the hours of the instance that called the function
	calcDays();			//Recalculate the number of days worked for the instance that called the function
	return temp;		//Return temp so that this function will behave like the normal postfix operator when used in a statement
}

//Prefix -- operator (See comments above for overloaded ++ operator functions)
NumDays NumDays::operator--()
{
	--hours;
	if (hours < 0)
		hours = 0;		//Do not allow a negative number of hours
	calcDays();
	return *this;
}

//Postfix -- operator
NumDays NumDays::operator--(int)
{
	NumDays temp;
	hours--;
	if (hours < 0)
		hours = 0;		//Do not allow a negative number of hours
	calcDays();
	return temp;
}

//Destructor
NumDays::~NumDays()
{
}
