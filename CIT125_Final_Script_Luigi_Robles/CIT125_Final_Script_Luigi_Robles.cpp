// CIT125 Intro to C++ Luigi Robles
// 08-09-2020 Summer Term
// Final Script 1 do...while loop
// Verify Correct Password, Maximum
// of 3 attempts

#include <iostream>
using namespace std;

int main()
{
	//declare and initialize variables
	int failed = 0;
	string correctPass = "password";
	string passEntered = "";

	do //begin loop
	{
		//input for password 
		cout << "Please enter your password: " << endl; 
		cin >> passEntered;

		if (passEntered != correctPass)
		{
			cout << "Incorrect Password" << endl;
			failed += 1;
		}
		else if (passEntered == correctPass)
		{
			cout << "Thank you,Your are now logged in.";
			break;
		}
		cout << endl;

			
	} while (failed <= 2); //end loop

	if (failed >= 2)
	{
		cout << "Sorry you reached maximum number of attempts" << endl;
		cout << "Please see your systems administrator" << endl;
	}
	return 0;

} // end of main function