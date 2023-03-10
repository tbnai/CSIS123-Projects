//ShippingCrate
// 
#include <iomanip>
#include <iostream>


using namespace std;
int main()
{
	int length, width, height;

	const double PLYWOOD_COST = 0.54;
	const double STRAP_COST = 1.03;
	const double LABOR_COST = 3.37;
	const double MARKUP_RATE = 0.35;

	cout << "== Cost Estimate for Custom Crate ==" << endl;
	cout << endl;
	cout << setw(8) << left << " Enter length in inches:";
	cin >> length;
	cout << endl;
	cout << setw(8) << left << " Enter width in inches:";
	cin >> width;
	cout << endl;
	cout << setw(8) << left << " Enter height in inches:";
	cin >> height;
	cout << endl;


	double cratevol = (length - 1) * (width - 1) * (height - 1) / 1728.0;
	cout << " Interior volume of finished crate:" << fixed << setprecision(2) << setw(8) << cratevol << " cubic feet" << endl << endl;
	double surfacearea = 2 * ((length / 12.0) * (width / 12.0) + (length / 12.0) * (height / 12.0) + (width / 12.0) * (height / 12.0));
	double costPlywood = surfacearea * PLYWOOD_COST;
	double edgeLength = 4 * (length + width + height) / 12.0;
	double costStrapping = edgeLength * STRAP_COST;
	double manufactacturingCost = costPlywood + costStrapping + LABOR_COST;
	double estimatedCost = manufactacturingCost + (manufactacturingCost * MARKUP_RATE);
	cout << " Estimated cost of finished crate:" << fixed << setprecision(2) << setw(8) << estimatedCost << " dollars" << endl;
	return 0;
}