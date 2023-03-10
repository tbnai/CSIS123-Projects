// Lab05-Membership
//

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
	string familyname;
	char typeofmembership;
	int numberofmemberships;

	const double REGULAR_COST = 85.00;
	const double LIFETIME_COST = 495.00;
	const double DISCOUNT = 0.32;
	double membershipcost;

	cout << "Enter Family name: ";
	cin >> familyname;
	cout << endl;

	cout << "Reg or Life - R/L?";
	cin >> typeofmembership;
	cout << endl;

	cout << "Membership counts:";
	cin >> numberofmemberships;
	cout << endl;

	if (typeofmembership == 'L' || typeofmembership == 'l')
	{
		membershipcost = LIFETIME_COST;
	}
	else 
	{
		membershipcost = REGULAR_COST;
	}

	if (numberofmemberships >= 5)
	{
		membershipcost = DISCOUNT* membershipcost;
	}
	double totalcost = membershipcost * numberofmemberships;
	cout << numberofmemberships << "memberships @" << "$" << membershipcost << "=" << "$" << totalcost;
	cout << endl;

	return 0;
}	
