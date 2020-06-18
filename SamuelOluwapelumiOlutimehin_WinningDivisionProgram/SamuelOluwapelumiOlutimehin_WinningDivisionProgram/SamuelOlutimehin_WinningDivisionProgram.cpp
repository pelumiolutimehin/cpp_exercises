//Part I - Identification / Algorithm
/*Oluwapelumi Olutimehin
CS 203
5/1/2020

Program Summary:
This program prompts for the sales figures of multiple divisions (double) using a function. 
Then the program calls a function that get the highest of all the values and displays the name of the high grossing division, along with its sales figure.

***********Design************
Step 1: Define/Declare the functions to be used in the program
Step 2: Define/Declare a getSales function 
Step 3: In getSales, prompt users for the division's quarterly sales figure and validate the input and return the input
Step 4: Define/Declare a findHighest function
Step 5: In findHighest, using conditional statements, determine the highest of all the values given to the parameters and displays it
Step 6: Define/Declare the variables to be used in the program
Step 7: Then call getSales five times to get the figures for each of the divisions
Step 8: Call findHighest to display the name of the high grossing division, along with the sales figures
*/
//Part II-Preprocessor files and Libraries
//Define the header files to be used in the program
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//Function Prototypes
double getSales(string name);
void findHighest(double val1, double val2, double val3, double val4);

int main()
{
    //Part III - Declare / Initialize Variables
 
    //Declare and initialize the variables to be used in the program
    double northEastFigures, southEastFigures, northWestFigures, southWestFigures;

    //Part IV - Algorithmic Process
    //Call getSales and update the values of the mathematical variables based on the return value
    northEastFigures = getSales("Northeast");
    southEastFigures = getSales("Southeast");
    northWestFigures = getSales("Northwest");
    southWestFigures = getSales("Southwest");

    //Call findHighest to display the name of the high grossing division, along with the sales figures
    cout << "------------------------------------------------------------------------" << endl;
    findHighest(northEastFigures, southEastFigures, northWestFigures, southWestFigures);
    cout << "--------------------------------------------------------------------------";

    //Part V-Terminate the algorithmic process
    return 0;

}

//Function Definition
double getSales(string name)

{
    double sales;
    //Prompt users for the division's quarterly sales figure
    cout << "Enter the " << name << " division's quarterly sales figure: ";

    cin >> sales;
    //Validate the input
    while (sales < 0)
    {
        cout << "Please enter a valid quarterly sales figure: ";
        cin >> sales;
    }
    //return the input
    return sales;

}
//Function Definition
void findHighest(double val1, double val2, double val3, double val4)

{  
    string highest;
    double highestFigures;

    if (val1 >= val2 && val1 >= val3 && val1 >= val4)
    {
        highest = "Northeast";
        highestFigures = val1;
    }
    else if (val2 >= val1 && val2 >= val3 && val2 >= val4)
    {
        highest = "Southeast";
        highestFigures = val2;
    }
    else  if (val3 >= val1 && val3 >= val2 && val3 >= val4)
    {
        highest = "Northwest";
        highestFigures = val3;
    }
    else  if (val4 >= val2 && val4 >= val3 && val4 >= val1)
    {
        highest = "Southwest";
        highestFigures = val4;
    }
    //Output the values and the associated labels
    cout << fixed << setprecision(2);
    cout << setw(28) << "Highest Grossing Division: " << setw(7) << "   " << highest << endl;
    cout << setw(28) << "Sales Figure: " << setw(7) << "  " << highestFigures << endl;
}
/*
Part VI-Validation/Verification

Test Cases
---------------------------------------------------------------------------------------
Enter the Northeast division's quarterly sales figure: 10000
Enter the Southeast division's quarterly sales figure: 425
Enter the Northwest division's quarterly sales figure: 154
Enter the Southwest division's quarterly sales figure: 4165
------------------------------------------------------------------------
 Highest Grossing Division:        Northeast
              Sales Figure:        10000.00
--------------------------------------------------------------------------


*/