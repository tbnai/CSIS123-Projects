//Lab06-AccountTransactions
//

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int		main()
{
	char transCode = 'L';
	double balance = 0.00;
	double amount;

	while (transCode != 'Q')
	{
		cout << "Deposit Withdraw Quit - D/W/Q: ";
		cin >> transCode;
		
		transCode = toupper(transCode);
		if (transCode == 'D')
		{
			cout << "Amount to Deposit: ";
			cin >> amount;
			
			balance += amount;
		}
		else if (transCode == 'W')
		{
			cout << "Amount to Withdraw ";
			cin >> amount;
			
			balance -= amount;
		}
		else if (transCode == 'Q')
		{
			cout << endl;
		}
		else
		{
			cout << "Transaction code incorrect" << endl;
		}
	
	}
	cout << "Account Balance: $ " << balance << endl;




	return 0;
}