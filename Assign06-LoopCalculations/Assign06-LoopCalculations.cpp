//Assign06-LoopCalculations
// 

#include <iomanip>
#include <iostream>
#include <cctype>

using namespace std;

int		main()
{
	int integer = 0;
	int totalsum = 0;
	int count = 0;
	int maximum = -1;
	int minimum = -1;
	int evennumbers = 0;
	int oddnumbers = 0;
	double average = 0;

	while (integer >= 0)
	{
		if (integer < minimum && integer > 0 || count > 0)
		{
			if (minimum == -1)
			{
				minimum = integer;
			}
			
		}
		cout << "Enter an integer <negative value to Quit>: ";
		cin >> integer;
		if (integer > 0)
		{
			count++;
		}
		if (integer > 0)
		{
			totalsum += integer;
		}
		if (integer > maximum && integer > 0)
		{
			maximum = integer;
		}
		if (integer % 2 == 0 && integer > 0)
		{
			evennumbers++;
		}
		if (integer % 2 == 1 && integer > 0)
		{
			oddnumbers++;
		}
		
	
	}
	if (count > 0)
	{
		average = static_cast<double> (totalsum) / count;
	}

	cout << setw(8) << " Values Entered: " << setw(8) << count << endl;
	cout << setw(8) << " Sum of numbers: " << setw(8) << totalsum << endl;
	cout << setw(8) << "  Average value: " << setw(8) << average << endl;
	cout << setw(8) << "  Maximum value: " << setw(8) << maximum << endl;
	cout << setw(8) << "  Minimum value: " << setw(8) << minimum << endl;
	cout << setw(8) << "   Even numbers: " << setw(8) << evennumbers << endl;
	cout << setw(8) << "    Odd numbers: " << setw(8) << oddnumbers << endl;

	return 0;
}