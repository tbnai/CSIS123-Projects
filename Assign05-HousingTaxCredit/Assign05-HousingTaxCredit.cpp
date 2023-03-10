//Assign05-HousingTaxCredit

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	const double INCOME_LIMIT_MO = 37750;		// maximum income for Missouri
	const double INCOME_LIMIT_KS = 34500;		// maximum income for Kansas
	const double CREDIT_RATE = 0.0975;			// tax credit rate of 9.75%

	char homeowner;
	string state;
	double income;
	double creditamount;

	cout << "Are you a homeowner [Y/N]? ";
	cin >> homeowner;
	cout << endl;


	if (homeowner == 'Y' || homeowner == 'y')
	{
		cout << "Resident State [MO or KS]: ";
		cin >> state;
		cout << endl;
		if (state == "MO" || state == "mo" || state == "Mo")
		{
			cout << "Amount of annual income:";
			cin >> income;
			cout << endl;

			if (income <= INCOME_LIMIT_MO)
			{
				cout << setprecision(0) << fixed << "Allowed amount of credits:" << "$" << income * CREDIT_RATE << endl;
			}
			else
			{
				cout << "Applicant ineligible. Income too high. ";
			}
		}
		else if (state == "KS" || state == "Ks" || state == "ks")
		{
			cout << "Amount of annual income: " ;
			cin >> income;
			cout << endl;

			if (income <= INCOME_LIMIT_KS)
			{
				cout << setprecision(0) << fixed << "Allowed amount of credits:" << "$" << income * CREDIT_RATE;
			
			}
			else
			{
				cout << "Applicant ineligible. Income too high. " ;
			}
		}
		else
		{
			cout << "Applicant ineligible. Not Missouri or Kansas resident.";
		}
	}
	else
	{
		cout << "Applicant ineligible. Not a homeowner.";
	}

	
	return 0;
	}