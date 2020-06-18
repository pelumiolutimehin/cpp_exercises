//Part I- Identification/Algorithm
/*
Oluwapelumi Olutimehin
CS 203
5/1/2020

Program Summary:
This program recieves five judges' scores for a contestant.
Then the program drops the lowest and highest, then calculates and returns the average of the remaining scores which is given as the contestant main score .

****Design/Pseudocode********
Step 1: Define/Declare the header files to be used in the program
Step 2: Define/Declare the function that accepts the input for the scores and validates the input
Step 3: Define/Declare a function that returns the highest value out of the values given as arguments
Step 4: Define/Declare a function that returns the lowest value out of the values given as arguments
Step 5: Define/Declare an associated function that drops the lowest and highest values given, then calculates and returns the average of the remaining scores.
Step 6: Define/Declare the variables that are to be used in the int main() function of the program
Step 7: Call the input function five times to store the scores of all the judges
Step 8: Call the associated function that returns average of all the scores bar the highest and lowest values(with all the scores passed as arguments)
Step 9: Display that returned average and the associated labels.*/

//Part II - Preprocessor files / Libraries
//Define my header files
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Declare the Function Prototypes
void getJudgeData(double&, string);
double calcScore(double, double, double, double, double);
int findlowest(double, double, double, double, double);
int findHighest(double, double, double, double, double);

int main()
{
	//Part III - Declare / Initialize Variables

	//Declare and Initialize the variables to be used in the program

	double score1, score2, score3, score4, score5, mainScore;
	string judge1 = "Judge 1";
	string judge2 = "Judge 2";
	string judge3 = "Judge 3";
	string judge4 = "Judge 4";
	string judge5 = "Judge 5";

	//Part IV - Algorithmic Process
	//Call the function to prompt the user to enter a judge’s score multiple times
	getJudgeData(score1, judge1);
	getJudgeData(score2, judge2);
	getJudgeData(score3, judge3);
	getJudgeData(score4, judge4);
	getJudgeData(score5, judge5);

	//Update the value of the variable based on the called function return value
	mainScore = calcScore(score1, score2, score3, score4, score5);

	cout << fixed << setprecision(2);
	// Output the value and label what the value represents

	cout << endl << "----------------------------------------------------" << endl;
	cout << "Contestant's Score: " << mainScore << endl;
	cout << endl << "----------------------------------------------------" << endl;
	//Part V - Terminate the algorithmic process

	return 0;
}
//Function Definition
void getJudgeData(double& value, string judge)
{
	//Prompt the user to enter a judge’s score

	cout << "Enter " << judge << " score: ";
	cin >> value;
	// Validate the input given by the user

	while (value < 0 || value>10)
	{
		cout << "Please enter a valid score between 0 to 10: ";
		cin >> value;//Store the value in a variable 
	}
}
//Function Definition
int findlowest(double value1, double value2, double value3, double value4, double value5)
{
	int lowest;
	//Using conditional statements determine the lowest value
	if (value1 <= value2 && value1 <= value3 && value1 <= value4 && value1 <= value5)
	{
		lowest = value1; //Store the value in a variable

	}
	else if (value2 <= value1 && value2 <= value3 && value2 <= value4 && value2 <= value5)
	{
		lowest = value2;//Store the value in a variable 

	}
	else  if (value3 <= value1 && value3 <= value2 && value3 <= value4 && value3 <= value5)
	{
		lowest = value3;//Store the value in a variable 

	}
	else  if (value4 <= value1 && value4 <= value2 && value4 <= value3 && value4 <= value5)
	{
		lowest = value4;//Store the value in a variable 

	}
	else  if (value5 <= value1 && value5 <= value2 && value5 <= value3 && value5 <= value4)
	{
		lowest = value5;//Store the value in a variable 

	}

	return lowest;
}
//Function Definition
int findHighest(double value1, double value2, double value3, double value4, double value5)
{

	int highest;
	//Using conditional statements determine the highest value

	if (value1 >= value2 && value1 >= value3 && value1 >= value4 && value1 >= value5)
	{
		highest = value1;//Store the value in a variable 

	}
	else if (value2 >= value1 && value2 >= value3 && value2 >= value4 && value2 >= value5)
	{
		highest = value2;//Store the value in a variable 

	}
	else  if (value3 >= value1 && value3 >= value2 && value3 >= value4 && value3 >= value5)
	{
		highest = value3;//Store the value in a variable 

	}
	else  if (value4 >= value1 && value4 >= value2 && value4 >= value3 && value4 >= value5)
	{
		highest = value4;//Store the value in a variable 

	}
	else  if (value5 >= value1 && value5 >= value2 && value5 >= value3 && value5 >= value4)
	{
		highest = value5;//Store the value in a variable 

	}

	return highest;

}
//Function Definition
double calcScore(double value1, double value2, double value3, double value4, double value5)
{

	//Call the functions that find highest and lowest and store the returned values in variables. 
	double highest = findHighest(value1, value2, value3, value4, value5);
	double lowest = findlowest(value1, value2, value3, value4, value5);

	//Declare and Update the value of the mathematical variable based on its operation 

	double score = (value1 + value2 + value3 + value4 + value5 - highest - lowest) / 3;
	
	//return the variable
	return score;
}
/*
Part VI-Verification/Validation

Test Cases

Enter Judge 1 score: 10
Enter Judge 2 score: 9
Enter Judge 3 score: 8
Enter Judge 4 score: 7
Enter Judge 5 score: 6

----------------------------------------------------
Contestant's Score: 8.00
----------------------------------------------------
Enter Judge 1 score: 9
Enter Judge 2 score: 5
Enter Judge 3 score: 7.8
Enter Judge 4 score: 10
Enter Judge 5 score: 9.6

----------------------------------------------------
Contestant's Score: 8.80
----------------------------------------------------

Enter Judge 1 score: 10
Enter Judge 2 score: 10
Enter Judge 3 score: 8
Enter Judge 4 score: 9.5
Enter Judge 5 score: 7.5

----------------------------------------------------
Contestant's Score: 9.33
----------------------------------------------------

*/