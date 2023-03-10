// Assign04-CableBill
//

#include <iostream>
#include <iomanip>


using namespace std;
int main()
{
	const double BASIC_RESIDENTIAL = 18.50;		//basic charge - residential 
	const double BASIC_BUSINESS = 75.00;		//basic charge - business 
	const double CONNECT_RESIDENTIAL = 6.50;	//additional connection cost - residential 
	const double CONNECT_BUSINESS = 5.00;		//additional connection cost (above 10 total ) - business 
	const double PREMIUM_RESIDENTIAL = 7.50;	//cost per premium channal - residential 
	const double PREMIUM_BUSINESS = 50.00;		//cost per premium channal - business

	char installType;
	int additionalconnections;
	int premiumchannels;
	double netcost;
	double connectioncost;


	cout << " Residential or Business [R or B]?" << endl;
	cin >> installType;
	cout << "How many Additional Connections?" << endl;
	cin >> additionalconnections;
	cout << "Total number of Premium Channels:" << endl;
	cin >> premiumchannels;
	cout << endl;

	if (installType == 'B' || installType == 'b')
	{
		installType = 'B';
	}
	else 
	{
		installType = 'R';
	}
	if (installType == 'R')
	{
		//residential cost = basic residential + num additional connection * cost per connection + num prem chann * cost per prem chann
		netcost = BASIC_RESIDENTIAL + additionalconnections * CONNECT_RESIDENTIAL + premiumchannels * PREMIUM_RESIDENTIAL;

	}
	else
	{
		if(additionalconnections <= 9 ) 
		{
			connectioncost = 0;
		}
		else
		{
			connectioncost = CONNECT_BUSINESS * additionalconnections - 9 * CONNECT_BUSINESS;

		}
		//business subscribers= CONNECT_BUSINESS
		netcost = BASIC_BUSINESS + connectioncost + premiumchannels * PREMIUM_BUSINESS;
	}
	

	cout << "Total amount of Cable Bill:" << netcost << endl;




	return 0;
}