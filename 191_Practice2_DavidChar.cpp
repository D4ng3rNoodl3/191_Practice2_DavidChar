#include <iostream>
#include<string>
using namespace std; 

string input = ""; 
string firstName = "";
string lastName = "";

int main()
{
	cout << "What is your Name? : "; 
	getline(cin, input);

	for (int i = 0; i < input.size(); ++i)
	{
		char c = input[i];
		input[i] = tolower(c);
	}

	auto i = input.find(' ');
	if (i) 
	{
		firstName = input.substr(0, i);
	}
	
	i = input.rfind(' ');
	if(i)
	{
		++i; 
		if (i < input.length())
		{
			lastName = input.substr(i);
		}
	}
	
	firstName = toupper(firstName[0]);

	lastName[0] = toupper(lastName[0]);

	cout << "Name: " << lastName << ", " << firstName << "." << endl;
}







