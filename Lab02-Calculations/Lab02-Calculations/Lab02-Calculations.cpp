// Lab02-Calculations
//
#include <iostream>

using namespace std; 

int		main()

{
	double length;
	double width; 
	double perimeter; 
	double area; 


	//	length = 17.2;
	//	width  = 9.38;

	//	perimeter = length + width + length + width;

	cout << endl<< " Enter the length:		";
	cin >> length; 
	cout << endl << "Enter the width:	";
	cin >> width; 
	cout << endl;

	perimeter = 2 * (length + width);
	area = length * width;


	cout << endl;
	cout << " perimeter:		" << perimeter;
	cout << " square area:	" << area << endl;

	cout << endl;




	return 0; 






}