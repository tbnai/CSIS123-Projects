// Assign09-SalesFunctions
//
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

string nameFormat(string, string);
double orderAmount(double, int);
double salesTaxAmount(double, double);
void displayOut(string, double, double);
int main()
{
	const double SALES_TAX_RATE = 0.09265;
	string lastName;
	string firstName;
	double discount = 0.00;
	//string nameFormat = lastName, firstName; 
	int quantity = 0.00;
	double itemPrice = 0.00;
	double orderAmount = (quantity * itemPrice) - discount;
	string nameString;
	double orderTotal = (quantity * itemPrice);
	double salesTax = 0.00;
	double salesTaxAmount = (salesTax * orderAmount * SALES_TAX_RATE);
	//void displayOutput = nameString, orderAmount, salesTaxAmount;
	int index = 0;
	const int MAX_ARRAY_SIZE = 26;
	string tranactions[MAX_ARRAY_SIZE];


	ifstream salesTrans;

	salesTrans.open("SalesTransactions.txt");
	
		if (!salesTrans){
			cout << endl << "Error opening input file" << endl << endl;
			return -1;
		}
		while (index < MAX_ARRAY_SIZE) {
			salesTrans >> lastName >> firstName >> quantity >> itemPrice;
			orderAmount = orderAmount * .90;
			cout << left << lastName << "," << left << firstName << right << setw(10) << orderAmount << endl;
			index++;
		}
	return 0;
}
string nameFormat(string lastName, string firstName)
{
	return lastName + ", " + firstName;
}
double orderAmount(double itemprice, double quantity)
{
	double orderAmount = itemprice * quantity;
	if (orderAmount > 300)
	{
		orderAmount = orderAmount * .90;
	}
	return orderAmount;
}
double salesTaxAmount(double orderAmount, double salestaxrate)
{
	double salesTaxAmount = orderAmount * salestaxrate;
	return salesTaxAmount;
}
void displayOut(string nameFormat, double ordertotal, double salesTaxAmount) {
	cout << fixed << setprecision(2);
	
}
