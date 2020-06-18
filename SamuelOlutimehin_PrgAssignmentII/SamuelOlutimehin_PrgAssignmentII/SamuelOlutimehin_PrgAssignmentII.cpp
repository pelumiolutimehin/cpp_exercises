//--- Start here
//identifying the header/preprocessor files
#include <iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	int age;

	cout << "What is your first name:";
	cin >> name;
	cout << "How old are you:";
	cin >> age;
	//outputting information to the screen
	cout << "\nHello world!\n";
	cout<<"My name is "<<name<<" and this is my first computer program!\n";
	cout << "I am "<<age<<" years old!"<<endl;

	return 0;    //exit th program
}
//--- End here