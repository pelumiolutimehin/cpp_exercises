//Part I - Identification/Algorithm
/*
Oluwapelumi Olutimehin
CS 203 - Computer Programming I
03/06/2020

Program Summary:
This program displays menu of actions that it is able to perform.
This program utilizes switch statement to perform an action based on input given by the user 
 
 *********Pseudocode************
 Step 1: Declare the variables to be used in the program
 Step 2: Display the menu of actions(with numerical values assigned to each action) to the user
 Step 3: Prompt the user to enter the numerical value assigned to their desired option
 Step 4: Store the number in a variable
 Step 4: Build a switch statement with cases to be executed based on the input given by the user
 Step 5: For each case, output the input entered by the user with labels
 Step 6: Print the additional statements if relational conditions are met

*/
//Part II - Preprocessor Files/ Libraries 
//Define my header files
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//Part III-Declare the variables
	//Declare the variables to be used
	string state, name;
	int year, number1, number2, choice, age, product;

	//Part IV - Algorithmic Process
	//Display the menu of actions to the user
	cout << "The menu below displays a list of actions that can be performed: "<<endl;
	cout << left << setw(4) << "1." << "Ask the user to enter their name?"<<endl;
	cout << left << setw(4) << "2." << "Ask the user to enter the state where they were born?"<<endl;
	cout << left << setw(4) << "3." << "Ask the user to enter the year in which they were born?"<<endl;
	cout << left << setw(4) << "4." << "Ask the user to enter in two numbers(integers)?"<<endl<<endl;

	//Prompt the user to enter choice
	cout << "Enter your choice of action from 1 to 4 (1/2/3/4): ";
	cin >> choice;//Store the number in a variable

	cin.ignore();

	cout << "--------------------------------------------------"<<endl;

	//Put the switch statement
	switch (choice)
	{
	case 1: cout<<"Enter your name: ";//Prompt the user to enter name
		getline (cin, name);//Store the string input in a variable

		//Display the input with associated label 
		cout << endl << left << setw(10) << "Name:" << name<<endl;
		break;

		
	case 2: cout << "Enter your state of birth: ";//Prompt the user to enter state of birth
		cin >> state;//Store the string input in a variable

		//Display the input with associated label
		cout << endl << left << setw(16) << "State of Birth:" << state<<endl;

		//Set an additional conditional statement
		if (state == "Mississippi" || state == "MS"||state=="mississippi"||state=="ms")
		{
			cout << "Hey Mississippian!\n";
		}
		break;

	case 3: cout << "Enter your year of birth: ";//Prompt the user to enter year of birth
		cin >> year;//Store the number input in a variable
		while (year >= 2020) 
		{
			cout << "Enter a valid year: ";
			cin >> year;
		}
		//Display the input with associated label
		cout << endl << left << setw(16) << "Year of Birh:" << year<<endl;

		//Update the value of the mathematical variable age depending on the operation
		 age = 2020 - year;

		 //Set an additional conditional statement
		if (age >= 21) {
			cout << "You are of legal age to drink alcoholic beverages!"<<endl;
		}
		else
		{
			cout << "Minors are not allowed to drink alcoholic beverages!"<<endl;
		}
		break;

	case 4: cout << "Enter an integer: ";//Prompt the user to input a number
		cin >> number1;//Store the number 
		cout << "Enter another integer: ";//Prompt the user to input a number
		cin >> number2;//Store the number

		//Display the numbers with an associated label
		cout << endl << "Numbers:\n" <<number1<<endl<< number2;
		 product = number1 * number2;

		 // Set a conditional statement to display if the product is even or odd
		if ((product % 2) == 0)
			cout << "\n\nThe product of " << number1 << " and " << number2 << " is even!" << endl;
		else
			cout << "\n\nThe product of " << number1 << " and " << number2 << " is odd!" << endl;
		break;
//Set a default statement in case none of the constant expression match the value of integer expression
	default: cout << "Invalid input entered for choice.\n";
	}
	cout << "--------------------------------------------------"<<endl;
	// Terminate the algorithmic process
	return 0;
}
//Part VI - Validation/Verification
/*
Test Cases

The menu below displays a list of actions that can be performed:
1.  Ask the user to enter their name?
2.  Ask the user to enter the state where they were born?
3.  Ask the user to enter the year in which they were born?
4.  Ask the user to enter in two numbers(integers)?

Enter your choice of action from 1 to 4 (1/2/3/4): 3
--------------------------------------------------
Enter your year of birth: 2000

Year of Birh:   2000
Minors are not allowed to drink alcoholic beverages!
--------------------------------------------------

The menu below displays a list of actions that can be performed:
1.  Ask the user to enter their name?
2.  Ask the user to enter the state where they were born?
3.  Ask the user to enter the year in which they were born?
4.  Ask the user to enter in two numbers(integers)?

Enter your choice of action from 1 to 4 (1/2/3/4): 1
--------------------------------------------------
Enter your name: Winston Bishop

Name:     Winston Bishop
--------------------------------------------------

The menu below displays a list of actions that can be performed:
1.  Ask the user to enter their name?
2.  Ask the user to enter the state where they were born?
3.  Ask the user to enter the year in which they were born?
4.  Ask the user to enter in two numbers(integers)?

Enter your choice from 1 to 4 (1/2/3/4): 4
--------------------------------------------------
Enter an integer: 10
Enter another integer: 16

Numbers:
10
16

The product of 10 and 16 is even!
--------------------------------------------------

*/