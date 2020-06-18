
//Part I - Identification/ Algorithm

/*
Oluwapelumi Olutimehin
Computer Programming   I - CS203
2 April 2020

Program Summary: This program inputs numerical values from the input file then calculates the total and average of all the inputed numerical values. 
The program then generates a random number between the range of -7 and 23 and stores it in a variable. 
It outputs the random number, total and average in an output file and also displays the random number to the console with labels 

*********Pseudocode*********
Step 1: Declare all the variables to be used in the program
Step 2: Define the files to be used in the program
Step 3: Generate the random number and store the number in a variable
Step 4: Open the input file and input the values from the file into variables
Step 5: Calculate the sum and average of the numerical values and store the values in different variables respectively.
Step 6: Close the file
Step 7: Open the output file and output the random number, sum and average to the file
Step 8: Close the file
Step 9: Display the random number generated to the console
************************************

*/

//Part II- Preprocessor/library files
//Define header files to be used

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	
	//Part III- Declare/Initialize the Variables

	//Declare the variables to be used throughout the program
	double value, sum, average, random;

	//Initialise the accumulator
	sum = 0;

	//Define the files accessed in the program
	ifstream input;
	ofstream output;

	//Part IV - Algorithmic Process
	//Generate the seed for the random number generating
	unsigned seed = time(0);
	srand(seed);
	
	//Generate the random number and update the value of the mathematical variable
	random = (rand() % 31) - 7;

	//Open the associated input file 
	input.open("numbersIn.txt");
	
	//Check if the file was successfully opened
	if (!input)
	{
		cout << "This file was not successfully opened";
	}
	else
	{

		//Input numerical values from input file
		for (int count = 1; count <= 5; count++)
		{
			input >> value;
			
			//Update the value of the mathematical variables according to their operation
			sum += value;
			average = sum / count;
		}

		//Close the file appropriately
		input.close();
	
		//Create and open an output file
	output.open("numbersOut.txt");

	
	//Ouput the numerical values and their associated labels
	output << "------------------------------------------------------\n";
	output << showpoint << fixed << setprecision(2);
	output << setw(15) << "Total:" <<  setw(14) << sum <<endl;
	output << setw(15) << "Average:" << setw(14) << average << endl;
	output << "------------------------------------------------------\n";
	output << "Random # between ( -7 & 23 ):" << random <<endl;
	output << "------------------------------------------------------\n";

	//Close the output file appropriately a
	output.close();

	//Display the generated random number with an associated label
	cout << "Random # between (-7 & 23): " << random <<endl ;
	}

	//Part V -   Terminate the algorithmic process
	return 0;

}

/*
Part VI - Validation/ Verification

Test Cases

----------------------------------------------------------------------------------------

Random # between (-7 & 23): 20

C:\Users\oluti\source\repos\SamuelOlutimehin_Program\Debug\SamuelOlutimehin_Program.exe (process 5608) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

---------------------------------------------------------------------------------------------------------------------------------------------------

Random # between (-7 & 23): -2

C:\Users\oluti\source\repos\SamuelOlutimehin_Program\Debug\SamuelOlutimehin_Program.exe (process 8320) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

-----------------------------------------------------------------------------------------------------------

Random # between (-7 & 23): 16

C:\Users\oluti\source\repos\SamuelOlutimehin_Program\Debug\SamuelOlutimehin_Program.exe (process 8320) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/