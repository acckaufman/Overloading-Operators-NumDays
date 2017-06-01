//This program uses a class called NumDays to calculate the number of days someone has worked based on an 8-hour workday.
#include <iostream>
#include <iomanip>
#include "NumDays.h"
using namespace std;

void displayMenu();

int main()
{
	cout << "This program demonstrates the use of overloaded operators" << endl
		<< "in a class called NumDays." << endl << endl;

	cout << endl << "--------------------------------------------------------------------------" << endl;
	cout << "Step 1: Demonstrate use of the default constructor." << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "An instance of NumDays is now being created using the default constructor" << endl
		<< "with no arguments..." << endl << endl;
	NumDays step1;
	cout << "Done." << endl << endl;
	cout << "The NumDays object created currently holds the following values:" << endl;
	cout << "Hours: " << step1.getHours() << endl;
	cout << "Days: " << step1.getDays() << endl << endl;

	cout << "End Step 1." << endl << endl;

	system("pause");

	cout << endl << "--------------------------------------------------------------------------" << endl;
	cout << "Step 2: Demonstrate use of the overloaded constructor." << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "An instance of NumDays is now being created using the overloaded constructor." << endl
		<< "The constructor is being passed 4 hours worked as an argument." << endl << endl;
	NumDays step2(4);
	cout << "Done." << endl << endl;
	cout << "The NumDays object created currently holds the following values:" << endl;
	cout << "Hours: " << step2.getHours() << endl;
	cout << "Days: " << step2.getDays() << endl << endl;

	cout << "End Step 2." << endl << endl;

	system("pause");

	cout << endl << "--------------------------------------------------------------------------" << endl;
	cout << "Step 3: Demonstrate use of the overloaded addition operator." << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Let's assume the user worked 8 hours on Monday, and 10 hours on Tuesday." << endl;
	cout << "Two instances of NumDays are now being created." << endl << endl;
	NumDays monday(8), tuesday(10);
	cout << "Done." << endl << endl;
	cout << "Monday:" << endl
		<< "Hours: " << monday.getHours() << endl
		<< "Days: " << monday.getDays() << endl << endl;
	cout << "Tuesday:" << endl
		<< "Hours: " << tuesday.getHours() << endl
		<< "Days: " << tuesday.getDays() << endl << endl;
	cout << "Now, let's create a third instance of NumDays to figure out how many hours" << endl
		<< "the user has worked so far this week, using the default constructor." << endl << endl;
	NumDays week;
	cout << "Done." << endl << endl;
	cout << "Let's now test the overloaded addition operator to make sure it works," << endl
		<< "using the statement week = monday + tuesday." << endl << endl;
	week = monday + tuesday;
	cout << left;
	cout << "Results:" << endl << endl;
	cout << setw(8) << " " << setw(8) << "Monday" << setw(8) << "Tuesday" << setw(8) << "Week" << endl;		//Output in table format
	cout << setw(8) << "Hours" << setw(8) << monday.getHours() << setw(8) << tuesday.getHours() << setw(8) << week.getHours() << endl;
	cout << setw(8) << "Days" << setw(8) << monday.getDays() << setw(8) << tuesday.getDays() << setw(8) << week.getDays() << endl << endl;

	cout << "End Step 3." << endl << endl;

	system("pause");

	cout << endl << "--------------------------------------------------------------------------" << endl;
	cout << "Step 4: Demonstrate use of the overloaded subtraction operator." << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Let's assume the user worked 10 hours on Wednesday, and 8 hours on Thursday." << endl;
	cout << "Two instances of NumDays are now being created." << endl << endl;
	NumDays wednesday(10), thursday(8);
	cout << "Done." << endl << endl;
	cout << "Wednesday:" << endl
		<< "Hours: " << wednesday.getHours() << endl
		<< "Days: " << wednesday.getDays() << endl << endl;
	cout << "Thursday:" << endl
		<< "Hours: " << thursday.getHours() << endl
		<< "Days: " << thursday.getDays() << endl << endl;
	cout << "Now, let's create a third instance of NumDays to figure out how many" << endl
		<< "more hours the user worked on Wednesday than Thursday." << endl << endl;
	NumDays extra;
	cout << "Done." << endl << endl;
	cout << "Let's now test the overloaded subtraction operator to make sure it works," << endl
		<< "using the statement extra = wednesday - thursday." << endl << endl;
	extra = wednesday - thursday;
	cout << "Results:" << endl << endl;
	cout << setw(8) << " " << setw(10) << "Wednesday" << setw(10) << "Thursday" << setw(8) << "Extra" << endl;		//Output in table format
	cout << setw(8) << "Hours" << setw(10) << wednesday.getHours() << setw(10) << thursday.getHours() << setw(8) << extra.getHours() << endl;
	cout << setw(8) << "Days" << setw(10) << wednesday.getDays() << setw(10) << thursday.getDays() << setw(8) << extra.getDays() << endl << endl;

	system("pause");

	cout << endl << "Now, let's make sure the validation works, so that a negative" << endl
		<< "number of hours cannot be entered." << endl
		<< "Let's switch the numbers and say that the user worked 8 hours on " << endl
		<< "Wednesday and 10 hours on Thursday." << endl;
	cout << "Now changing the hours variables in the two NumDays objects." << endl << endl;
	wednesday.setHours(8);
	thursday.setHours(10);
	cout << "Done." << endl << endl;
	cout << "Now, let's see what happens when we try to subtract Thursday from Wednesday," << endl
		<< "using the statement extra = wednesday - thursday;" << endl << endl;
	extra = wednesday - thursday;
	cout << setw(8) << " " << setw(10) << "Wednesday" << setw(10) << "Thursday" << setw(8) << "Extra" << endl;		//Output in table format
	cout << setw(8) << "Hours" << setw(10) << wednesday.getHours() << setw(10) << thursday.getHours() << setw(8) << extra.getHours() << endl;
	cout << setw(8) << "Days" << setw(10) << wednesday.getDays() << setw(10) << thursday.getDays() << setw(8) << extra.getDays() << endl << endl;

	cout << "End Step 4." << endl << endl;
	system("pause");

	cout << endl << "--------------------------------------------------------------------------" << endl;
	cout << "Step 5: Demonstrate use of the overloaded increment operators." << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Let's create an instance of NumDays, passing it 7 hours." << endl << endl;
	NumDays testIncrement(7);
	cout << "Done." << endl << endl;
	cout << "testIncrement:" << endl
		<< "Hours: " << testIncrement.getHours() << endl
		<< "Days: " << testIncrement.getDays() << endl << endl;
	cout << "Now let's test the prefix increment operator, using a loop that executes" << endl
		<< "++testIncrement on every iteration." << endl << endl;

	for (int count = 0; count < 5; count++)
	{
		++testIncrement;
		cout << "After adding 1 more hour to testIncrement, we now have " << testIncrement.getHours() << " hours (" << testIncrement.getDays() << " days)." << endl;
	}
	cout << endl;

	system("pause");

	cout << endl << "Let's test the postfix increment operator in the same way, changing the loop" << endl
		<< "to execute testIncrement++ on every iteration." << endl << endl;
	cout << "testIncrement:" << endl
		<< "Hours: " << testIncrement.getHours() << endl
		<< "Days: " << testIncrement.getDays() << endl << endl;

	for (int count = 0; count < 5; count++)
	{
		testIncrement++;
		cout << "After adding 1 more hour to testIncrement, we now have " << testIncrement.getHours() << " hours (" << testIncrement.getDays() << " days)." << endl;
	}
	cout << endl;

	cout << "End Step 5." << endl << endl;
	system("pause");

	cout << endl << "--------------------------------------------------------------------------" << endl;
	cout << "Step 6: Demonstrate use of the overloaded decrement operators." << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Let's set the number of hours in testIncrement to 13." << endl << endl;
	testIncrement.setHours(13);
	cout << "Done." << endl << endl;
	cout << "testIncrement:" << endl
	<< "Hours: " << testIncrement.getHours() << endl
	<< "Days: " << testIncrement.getDays() << endl << endl;
	cout << "Now let's test the prefix decrement operator, using a loop that executes" << endl
		<< "--testIncrement on every iteration." << endl << endl;

	for (int count = 0; count < 5; count++)
	{
		--testIncrement;
		cout << "After subtracting 1 hour from testIncrement, we now have " << testIncrement.getHours() << " hours (" << testIncrement.getDays() << " days)." << endl;
	}
	cout << endl;

	system("pause");

	cout << endl << "Let's test the postfix decrement operator in the same way, changing the loop" << endl
		<< "to execute testIncrement-- on each iteration." << endl << endl;
	cout << "testIncrement:" << endl
	<< "Hours: " << testIncrement.getHours() << endl
	<< "Days: " << testIncrement.getDays() << endl << endl;

	for (int count = 0; count < 5; count++)
	{
		testIncrement--;
		cout << "After subtracting 1 hour from testIncrement, we now have " << testIncrement.getHours() << " hours (" << testIncrement.getDays() << " days)." << endl;
	}
	cout << endl;

	system("pause");

	cout << endl << "Finally, let's run the loop one more time using the postfix decrement operator" << endl
		<< "to ensure that our validation works and a negative number cannot \nbe stored in hours." << endl << endl;
	cout << "testIncrement:" << endl
		<< "Hours: " << testIncrement.getHours() << endl
		<< "Days: " << testIncrement.getDays() << endl << endl;

	for (int count = 0; count < 5; count++)
	{
		testIncrement--;
		cout << "After subtracting 1 hour from testIncrement, we now have " << testIncrement.getHours() << " hours (" << testIncrement.getDays() << " days)." << endl;
	}
	cout << endl;

	cout << "It works!" << endl << endl;

	cout << "End Step 6." << endl << endl;
	system("pause");

	cout << endl << "--------------------------------------------------------------------------" << endl;
	cout << "Step 7: Allow user input" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "As a final step, let's ensure that the user is able to modify" << endl
		<< "the number of hours in an object." << endl << endl;
	cout << "Let's start by creating three instances of the NumDays class." << endl << endl;
	NumDays array[3];
	cout << "Done." << endl << endl;
	
	char again = 'n';		//To allow user to repeat the loop

		cout << left;
		cout << setw(12) << " " << setw(12) << "Instance 1" << setw(12) << "Instance 2" << setw(12) << "Instance 3" << endl;
		cout << setw(12) << "Hours:" << setw(12) << array[0].getHours() << setw(12) << array[1].getHours() << setw(12) << array[2].getHours() << endl;
		cout << setw(12) << "Days:" << setw(12) << array[0].getDays() << setw(12) << array[1].getDays() << setw(12) << array[2].getDays() << endl << endl;

		do{
		int selection;		//To hold the user's selection for modification
		cout << "Which instance of the NumDays class would you like to modify? (1/2/3): ";
		cin >> selection;

		char numbersDays = 'h';
		cout << "Would you like to modify hours or days? (h/d): ";
		cin >> numbersDays;

		if (numbersDays == 'h' || numbersDays == 'H')
		{
			int value;			//To hold the number of hours the user would like to set
			cout << "How many hours should we set for Instance " << (selection) << "? ";
			cin >> value;

			cout << endl << "Now setting " << value << " hours for Instance " << (selection) << "." << endl;
			array[(selection - 1)].setHours(value);
		}
		else if (numbersDays == 'd' || numbersDays == 'D')
		{
			int value;			//To hold the number of days the user would like to set
			cout << "How many days should we set for Instance " << (selection) << "? ";
			cin >> value;

			cout << endl << "Now setting " << value << " days for Instance " << (selection) << "." << endl;
			array[(selection - 1)].setDays(value);
		}

		cout << endl << "Here are the new values:" << endl << endl;
		cout << left;
		cout << setw(12) << " " << setw(12) << "Instance 1" << setw(12) << "Instance 2" << setw(12) << "Instance 3" << endl;
		cout << setw(12) << "Hours:" << setw(12) << array[0].getHours() << setw(12) << array[1].getHours() << setw(12) << array[2].getHours() << endl;
		cout << setw(12) << "Days:" << setw(12) << array[0].getDays() << setw(12) << array[1].getDays() << setw(12) << array[2].getDays() << endl << endl;
		
		cout << "Would you like to try modifying another value? (y/n): ";
		cin >> again;
	} while (again == 'y' || again == 'Y');

	cout << endl << "End Step 7" << endl << endl;
	cout << "Congratulations, you've made it through the program!" << endl << endl;
	system("pause");

	return 0;
}