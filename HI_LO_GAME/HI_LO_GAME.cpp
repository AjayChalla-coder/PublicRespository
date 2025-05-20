#include <iostream>
using namespace std;

int main()
{
	cout << "\t\t\t\t\tWELCOME TO HI-LO GAME" << endl;
	cout << "\t\t\t\t\t======================" << endl;
	cout << "GUESS A NUMBER BETWEEN 1 TO 10 WHICH I AM THINKING" << endl;
	int num;
	cout << "Enter a number between 1 to 10: ";
	cin >> num;

	if (num == 1)
	{
		cout << "TOO LOW!!" << endl;
	}
	else if (num == 2)
	{
		cout << "TOO LOW!!" << endl;
	}
	else if (num == 3)
	{
		cout << "TOO LOW!!" << endl;
	}
	else if (num == 4)
	{
		cout << "TOO LOW!!" << endl;
	}
	else if (num == 5)
	{
		cout << "TOO LOW!!" << endl;
	}
	else if (num == 6)
	{
		cout << "TOO LOW!!" << endl;
	}
	else if (num == 7)
	{
		cout << "CORRECT!!" << endl;
	}
	else if (num == 8)
	{
		cout << "TOO HIGH!!" << endl;
	}
	else if (num == 9)
	{
		cout << "TOO HIGH!!" << endl;
	}
	else if (num == 10)
	{
		cout << "TOO HIGH!!" << endl;
	}
	else
	{
		cout << "INVALID INPUT - ENTER ONLY BETWEEN 1 TO 10 !!" << endl;
	}

	return 0;
}
