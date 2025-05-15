// MY_BANK_V2
// DATE   :: 12/05/25
// AUTHOR :: CHALLA AJAY

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>  // Include for password masking
using namespace std;

int main()
{
	const int maxaccounts{ 5 };
	int accountcount{ 4 };
	vector<string> usernames = { "ajay", "bob", "giga", "alex" };
	vector<string> passwords = { "2931", "1234", "1987", "2932" };
	vector<int> balances = { 100000, 200000, 300000, 400000 };
	vector<string> emails = { "ajay@gmail.com", "bob@gmail.com", "giga@gmail.com", "alex@gmail.com" };
	vector<string> phones = { "123456789", "8331023474", "9603229090", "987654321" };

	vector<string> transactionHistory;
	vector<string> loanHistory;

	int accountIndex = -1;
	int pin, withdraw, deposit, opt, loantype;
	double income, loaneligible = 0, totloanwithins = 0;
	string newUsername, newPassword, newEmail, newPhone, currentUsername, currentPassword;
	int fopt;

	// Admin portal
	string eadname{};
	string adname = "ajaytheadmin";
	int eadpass{};
	int adpass = 456789;

	cout << "\t\t\t\t\t$$$Welcome_to_our_bank$$$" << endl;
	cout << "\t\t\t\t\t   -------------------   " << endl;

	while (true)
	{
		cout << "\n\n Who are you ?? " << endl;
		cout << "1. Admin " << endl;
		cout << "2. User " << endl;
		cout << "3. Exit " << endl;
		cout << "Enter your choice : " << endl;
		cin >> fopt;

		if (fopt == 1)
		{
			cout << "Welcome Admin!! " << endl;
			cout << "Enter your name : ";
			cin >> eadname;

			cout << "Enter your password : ";
			eadpass = 0;
			char ch;
			while ((ch = _getch()) != '\r')  // Mask the password input
			{
				eadpass = eadpass * 10 + (ch - '0');
				cout << '*';  // Display asterisks for password
			}

			if (eadname == adname && eadpass == adpass)
			{
				cout << "Welcome - Admin , to the admin portal!!" << endl;

				while (true)
				{
					cout << "\nAdmin Menu:" << endl;
					cout << "1. Add User" << endl;
					cout << "2. Delete User" << endl;
					cout << "3. Change User Details (Password, Email, Phone)" << endl;
					cout << "4. Exit Admin Portal" << endl;
					cout << "Enter your choice: ";
					cin >> opt;

					if (opt == 1)  // Add a new user
					{
						if (accountcount < maxaccounts)
						{
							cout << "Enter new Username: ";
							cin >> newUsername;
							cout << "Enter new Password: ";
							newPassword = "";
							char ch;
							while ((ch = _getch()) != '\r')  // Mask the password input
							{
								newPassword += ch;
								cout << '*';  // Display asterisks for password
							}
							usernames.push_back(newUsername);
							passwords.push_back(newPassword);
							balances.push_back(0);
							emails.push_back("");
							phones.push_back("");
							accountcount++;
							cout << "Account created successfully!" << endl;
						}
						else
						{
							cout << "Account limit reached. Can't create more accounts." << endl;
						}
					}
					else if (opt == 2)  // Delete a user
					{
						cout << "Enter username to delete: ";
						cin >> newUsername;
						bool userFound = false;
						for (int i = 0; i < accountcount; i++)
						{
							if (usernames[i] == newUsername)
							{
								usernames.erase(usernames.begin() + i);
								passwords.erase(passwords.begin() + i);
								balances.erase(balances.begin() + i);
								emails.erase(emails.begin() + i);
								phones.erase(phones.begin() + i);
								accountcount--;
								cout << "User " << newUsername << " deleted successfully!" << endl;
								userFound = true;
								break;
							}
						}
						if (!userFound)
						{
							cout << "User not found!" << endl;
						}
					}
					else if (opt == 3)  // Change user details (Password, Email, Phone)
					{
						cout << "Enter username to update: ";
						cin >> newUsername;
						bool userFound = false;
						for (int i = 0; i < accountcount; i++)
						{
							if (usernames[i] == newUsername)
							{
								userFound = true;
								cout << "Updating details for " << newUsername << endl;
								cout << "Enter new password: ";
								newPassword = "";
								char ch;
								while ((ch = _getch()) != '\r')  // Mask the password input
								{
									newPassword += ch;
									cout << '*';  // Display asterisks for password
								}
								passwords[i] = newPassword;

								cout << "\nEnter new email: ";
								cin >> newEmail;
								emails[i] = newEmail;

								cout << "Enter new phone number: ";
								cin >> newPhone;
								phones[i] = newPhone;

								cout << "User details updated successfully!" << endl;
								break;
							}
						}
						if (!userFound)
						{
							cout << "User not found!" << endl;
						}
					}
					else if (opt == 4)
					{
						cout << "Exiting Admin Portal..." << endl;
						break;
					}
					else
					{
						cout << "Invalid option! Please try again." << endl;
					}
				}
			}
			else
			{
				cout << "Sorry, wrong password or username entered___Pls, try again!!" << endl;
			}
		}
		else if (fopt == 2)  // User Portal
		{
			cout << "\nPlease select an option from below: " << endl;
			cout << "1. Use an existing account." << endl;
			cout << "2. Create an account" << endl;
			cout << "3. Exit" << endl;
			cout << "Enter an option of your choice: ";
			cin >> opt;

			if (opt == 1)
			{
				cout << "Enter your username: ";
				cin >> currentUsername;
				cout << "Enter your password: ";
				currentPassword = "";
				char ch;
				while ((ch = _getch()) != '\r')  // Mask the password input
				{
					currentPassword += ch;
					cout << '*';  // Display asterisks for password
				}

				for (int i = 0; i < accountcount; i++)
				{
					if (usernames[i] == currentUsername && passwords[i] == currentPassword)
					{
						accountIndex = i;
						cout << "Welcome " << currentUsername << "!" << endl;
						break;
					}
				}

				if (accountIndex == -1)
				{
					cout << "Incorrect username or password!!" << endl;
					continue;
				}

				while (true)
				{
					cout << "\nPlease select the operation you want to perform" << endl;
					cout << "1. Balance Enquiry." << endl;
					cout << "2. Withdraw Money." << endl;
					cout << "3. Deposit Money." << endl; ;
					cout << "4. View Transaction History." << endl;
					cout << "5. Loan Enquiry." << endl;
					cout << "6. View Loan Eligibility." << endl;
					cout << "7. Exit." << endl;
					cout << "Enter your choice: ";
					cin >> opt;

					if (opt == 1)
					{
						cout << "Your Current Balance: ₹" << balances[accountIndex] << endl;
					}
					else if (opt == 2)
					{
						cout << "Enter Withdrawal amount: ";
						cin >> withdraw;
						if (withdraw > balances[accountIndex])
						{
							cout << "Insufficient Balance!!" << endl;
						}
						else
						{
							balances[accountIndex] -= withdraw;
							cout << "Withdrawal Successful!" << endl;
							transactionHistory.push_back("Withdrew ₹" + to_string(withdraw));
							cout << "Your new balance is ₹" << balances[accountIndex] << endl;
						}
					}
					else if (opt == 3)
					{
						cout << "Enter Deposit Amount: ";
						cin >> deposit;
						balances[accountIndex] += deposit;
						cout << "Deposit Successful!" << endl;
						transactionHistory.push_back("Deposited ₹" + to_string(deposit));
						cout << "Your new balance is ₹" << balances[accountIndex] << endl;
					}
					else if (opt == 4)
					{
						cout << "\nTransaction History:\n";
						for (const auto& t : transactionHistory)
						{
							cout << t << endl;
						}
					}
					else if (opt == 5)
					{
						cout << "Loan Types: \n";
						cout << "1. Personal Loan \n";
						cout << "2. Home Loan \n";
						cout << "3. Car Loan \n";
						cout << "Enter Loan type: ";
						cin >> loantype;
					}
					else if (opt == 6)
					{
						cout << "Your Loan Eligibility: ₹" << loaneligible << endl;
					}
					else if (opt == 7)
					{
						cout << "Exiting User Portal..." << endl;
						break;
					}
					else
					{
						cout << "Invalid option! Please try again." << endl;
					}
				}
			}
			else if (opt == 2)
			{
				if (accountcount < maxaccounts)
				{
					cout << "Enter a username for your account: ";
					cin >> newUsername;
					cout << "Enter a password for your account: ";
					newPassword = "";
					char ch;
					while ((ch = _getch()) != '\r') // Mask the password input
					{
						newPassword += ch;
						cout << '*'; // Display asterisks for password
					}
					usernames.push_back(newUsername);
					passwords.push_back(newPassword);
					balances.push_back(0);
					emails.push_back("");
					phones.push_back("");
					accountcount++;
					cout << "Account created successfully!" << endl;
				}
				else
				{
					cout << "Account limit reached. Can't create more accounts." << endl;
				}
			}
			else if (opt == 3)
			{
				cout << "Exiting User Portal..." << endl;
				break;
			}
		}
		else if (fopt == 3)
		{
			cout << "Exiting... Thank you!" << endl;
			break;
		}
	}
	return 0;
}


