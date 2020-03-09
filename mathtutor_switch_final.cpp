#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



int main()
{
	double num1, num2;
	char ope;
	int num4 = static_cast<int>(num1) % static_cast<int>(num2);

	cout << "\t\t" << "Description: This program simple calculator\n"
		<< "\t\t" << "Program: Calculator\n"
		<< "\t\t" << "Programmer: Hanjae Kim\n"
		<< "\t\t" << "Course: CIT 120-T1\n"
		<< "\t\t" << "Last Modified: 03/07/20\n\n";

	cout << "\t***************************Menu********************************"
		<< "\n\t\tOPERATORS: +  -  /  %"
		<< "\n\t***************************************************************"

		
		<< "\n\n\tEnter first operands: ";
	cin >> num1;
	
	cout << "\n\tEnter second operands: ";
	cin >> num2;

	cout << "\n\tSelect an operator from the menu ";
	cin >> ope;

	if (ope == '+')
	{
		cout << "\tSOLUTION:\n"
			<< "\t__________________________________________________\n"
			<< "\t" << num1 << " " << ope << " " << num2 << " " << num1 + num2
			<< "\n\t" << "____________________________________________";
	}
	else if (ope=='-')
	{
		cout << "\tSOLUTION:\n"
			<< "\t__________________________________________________\n"
			<< "\t" << num1 << " " << ope << " " << num2 << " " << num1 - num2
			<< "\n\t" << "____________________________________________";


	}
	else if (ope=='*')
	{
		cout << "\tSOLUTION:\n"
			<< "\t__________________________________________________\n"
			<< "\t" << num1 << " " << ope << " " << num2 << " " << num1 * num2
			<< "\n\t" << "____________________________________________";

	}
	else if (ope=='/')
	{
		cout << "\tSOLUTION:\n"
			<< "\t__________________________________________________\n"
			<< "\t" << num1 << " " << ope << " " << num2 << " " << num1 / num2
			<< "\n\t" << "____________________________________________";
		if (num2 == '0')
		{
			cout << "\t\t Denominator cannot be zero\n\tRun the program again";
		}
	}
	else if (ope == '%')
	{
		

		cout << "\tSOLUTION:\n"
			<< "\t__________________________________________________\n"
			<< "\t" << num1 << " " << ope << " " << num2 << " " << num4
			<< "\n\t" << "____________________________________________";
		if (num2 == '0')
		{
			cout << "\t\t Denominator cannot be zero\n\tRun the program again";
		}
	}

	else
	{
		cout << "\n\tInvalid operator.\n\tRun the program again and enter operators from the menu";
	}



















	return 0;
}