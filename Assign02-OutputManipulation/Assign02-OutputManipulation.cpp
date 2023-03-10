//Assign02-OutputManipulation 
//

#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{

	string	first;
	string	middle;
	string	last;
	int		age;
	double	prevBalance = 10000;	//initial value
	double	expenditures;
	double	currBalance;
	//double currBalance = prevBalance - expenditures;
	

	cout << setw(18) << "Type in the FIRST name:	";
	cin >> first;
	cout << setw(15) << "MIDDLE name or initial:	";
	cin >> middle;
	cout << setw(20) << "Type in the LAST name :	";
	cin >> last;
	cout << "Enter the AGE in years:	";
	cin >> age;
	
	cout << setw(18) << left << "First name";
	cout << setw(15) << left << "Middle";
	cout << setw(20) << left << "Last name";
	cout << setw(3) << right << "Age" << endl;
	cout << setw(18) << left << "----------";
	cout << setw(15) << left << "------";
	cout << setw(20) << left << "---------";
	cout << setw(3) << right << "---" << endl;
	cout << setw(18) << left << first;
	cout << setw(15) << left << middle;
	cout << setw(20) << left << last;
	cout << setw(3) << right << age << endl;
	cout << endl << endl;

	cout << fixed << showpoint << setprecision(2);
	cout << setw(10) << "Amount of expenditures:	";
	cin >>  expenditures;
	cout << endl;
	cout << setw(10) << "Previous Balance: $ "<< prevBalance << endl;

	cout <<	setw(20) << right << "-" << setw(8) << right << expenditures << endl;
	cout << setw(28) <<	right << "----------" << endl;


	cout << setw(20) << right << "Current Balance: $ " << setw(8) << right << prevBalance - expenditures << endl;
	cout << setfill('#');
	cout << "Formatted Output: " << setw(10) << right << prevBalance - expenditures;
	











	return 0;

}