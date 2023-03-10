// Assign07-InventoryReport

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string description;
	string id;
	double cost = 0;
	int quantity = 0;

	int itemCount = 0;
	double itemValue = 0.00;
	double totalValue = 0.00;
	
	cout << fixed << setprecision(2);
	cout << setw(30) << "Inventory Items" << endl << endl; 
	cout << "Item ID" << setw(10) << "Cost" << setw(5) << "Qty";
	cout <<  setw(15) << "Total Value" << setw(15) << "Description" << endl;
	cout << "-------" << setw(10) << "-------" << setw(5) << "---";
	cout << setw(15) << "-----------" << setw(24) << "--------------------" << endl;
	ifstream fileHandle;

    // test the file can actually open
	fileHandle.open("Inventory.txt");
	if (!fileHandle)
	{
		cout << endl << "Error opening input file" << endl << endl;
		return -1;
	}

	fileHandle >> id >> cost >> quantity >> description;
	itemValue = cost * quantity;
	totalValue += itemValue;
	itemCount++;
	cout << id << setw(12) << right << cost << setw(5) << right << quantity << setw(15) << right << itemValue << "    " << left << description << endl;

	while (fileHandle >> id >> cost >> quantity >> description)
	{
		itemCount++;
		itemValue = cost * quantity;
		totalValue += itemValue;
		cout << id << setw(12) << right << cost << setw(5) << right << quantity << setw(15) << right << itemValue << "    " << left << description << endl;
	}
	fileHandle.close();
	cout << endl;
	cout << setw(5) << right << itemCount << "  " << "items" << setw(14) << "$" << setw(15) << totalValue << endl; 
	cout << endl;

	return 0;
}
