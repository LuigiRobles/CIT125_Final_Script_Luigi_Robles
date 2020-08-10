// CIT125 Intro to C++ Luigi Robles
// 08-09-2020 Summer Term
// Final Script 2 program-defined value returning function
// Calculate a total based on user's entered quantity and price

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
double getTotal(int quantity, double price);

int main()
{
	//declare and initialize variables
	int quantityOrdered = 0;
	double cost = 0.0;
	double subTotal = 0.0;

	cout << "Please enter the quantity ordered: ";
	cin >> quantityOrdered; //input for amount ordered

	cout << "Please enter the cost: ";
	cin >> cost; //input for price of item ordered

	cout << fixed << setprecision(2);
	subTotal = getTotal(quantityOrdered, cost); //calculate total cost
	cout << "The total is: $" << subTotal << endl; //output total cost

	return 0;

} // end of main function

//***Function definitions
double getTotal(int quantity, double price)
{
	double total = 0.0;

	total = (quantity * price);
	return total;
} // end of getTotal function