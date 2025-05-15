// MY_BANK_V1
// DATE   :: 11/05/25
// AUTHOR :: CHALLA AJAY

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    const int maxaccounts{ 5 };
    int accountcount{ 4 };
    vector<string> usernames = { "ajay", "kavya", "narasimha", "sahasra" };
    vector<string> passwords = { "2931", "1234", "1987", "2932" };
    vector<int> balances = { 100000, 200000, 300000, 400000 };
    vector<string> emails = { "ajay@gmail.com", "kavya@gmail.com", "narsimha@gmail.com", "sahasra@gmail.com" };
    vector<string> phones = { "123456789", "8331023474", "9603229090", "987654321" };

    vector<string> transactionHistory;
    vector<string> loanHistory;

    int accountIndex = -1;
    int pin, withdraw, deposit, opt, loantype;
    double income, loaneligible = 0, totloanwithins = 0;
    string newUsername, newPassword, newEmail, newPhone, currentUsername, currentPassword;

    cout << "\t\t\t\t\t$$$Welcome_to_our_bank$$$" << endl;
    cout << "\t\t\t\t\t   -------------------   " << endl;

    while (true)
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
            cin >> currentPassword;

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
                cout << "3. Deposit Money." << endl;
                cout << "4. Change Password." << endl;
                cout << "5. View Transaction History." << endl;
                cout << "6. Loan Enquiry." << endl;
                cout << "7. Change Email/Phone Number." << endl;
                cout << "8. View Loan Eligibility." << endl;
                cout << "9. Exit." << endl;
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
                    cout << "Enter New Password: ";
                    cin >> newPassword;
                    passwords[accountIndex] = newPassword;
                    cout << "Password Changed Successfully." << endl;
                }
                else if (opt == 5)
                {
                    cout << "\nTransaction History:\n";
                    for (const auto& t : transactionHistory)
                    {
                        cout << t << endl;
                    }
                }
                else if (opt == 6)
                {
                    cout << "Loan Types Available:" << endl;
                    cout << "1. Personal Loan (10% interest, max ₹5,00,000)" << endl;
                    cout << "2. Home Loan (7% interest, max ₹25,00,000)" << endl;
                    cout << "3. Education Loan (5% interest, max ₹10,00,000)" << endl;
                    cout << "Enter your choice (1-3): ";
                    cin >> loantype;
                    int requestedLoan;
                    cout << "Enter loan amount you wish to apply for: ";
                    cin >> requestedLoan;

                    double interest = 0.0;
                    double totalPayable = 0.0;
                    string loanTypeStr;

                    if (loantype == 1 && requestedLoan <= 500000) {
                        interest = 0.10;
                        loanTypeStr = "Personal Loan";
                    }
                    else if (loantype == 2 && requestedLoan <= 2500000) {
                        interest = 0.07;
                        loanTypeStr = "Home Loan";
                    }
                    else if (loantype == 3 && requestedLoan <= 1000000) {
                        interest = 0.05;
                        loanTypeStr = "Education Loan";
                    }
                    else {
                        cout << "Invalid loan type or amount exceeds limit." << endl;
                        loanHistory.push_back("Loan request failed.");
                        continue;
                    }

                    totalPayable = requestedLoan + (requestedLoan * interest);
                    cout << "Loan Enquiry Summary:" << endl;
                    cout << "Loan Type: " << loanTypeStr << endl;
                    cout << "Loan Amount: ₹" << requestedLoan << endl;
                    cout << "Interest Rate: " << interest * 100 << "%" << endl;
                    cout << "Total Payable (with interest): ₹" << totalPayable << endl;
                    loanHistory.push_back("Loan Enquiry - " + loanTypeStr + ": ₹" + to_string(requestedLoan));
                }
                else if (opt == 7)
                {
                    cout << "Enter new email: ";
                    cin >> newEmail;
                    cout << "Enter new phone number: ";
                    cin >> newPhone;
                    emails[accountIndex] = newEmail;
                    phones[accountIndex] = newPhone;
                    cout << "Email and Phone number updated!" << endl;
                }
                else if (opt == 8)
                {
                    cout << "Enter your income (₹): ";
                    cin >> income;
                    cout << "Enter your CIBIL score (300 to 900): ";
                    cin >> pin;
                    if (pin < 550) loaneligible = income * 12;
                    else if (pin <= 650) loaneligible = income * 20;
                    else loaneligible = income * 25;
                    totloanwithins = loaneligible + (loaneligible * 0.10);
                    cout << "You are eligible for a loan of ₹" << loaneligible << ". With 10% interest: ₹" << totloanwithins << endl;
                    loanHistory.push_back("Eligible Loan: ₹" + to_string(loaneligible));
                }
                else if (opt == 9)
                {
                    cout << "Logging out..." << endl;
                    break;
                }
                else
                {
                    cout << "Invalid option selected. Please try again..." << endl;
                }
            }
        }
        else if (opt == 2)
        {
            if (accountcount < maxaccounts)
            {
                cout << "Enter new Username: ";
                cin >> newUsername;
                cout << "Enter new Password: ";
                cin >> newPassword;
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
            cout << "Thank you for visiting. Exiting program." << endl;
            break;
        }
        else
        {
            cout << "Invalid option selected. Please try again..." << endl;
        }
    }

    return 0;
}