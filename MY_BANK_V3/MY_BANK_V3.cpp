// MY_BANK_V3
// DATE   :: 15/05/25
// AUTHOR :: CHALLA AJAY
// MY_BANK_V3
// DATE   :: 15/05/25
// AUTHOR :: CHALLA AJAY

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>  // For password masking
using namespace std;

// Function to input password with masking
string inputPassword() {
    string password;
    char ch;
    while ((ch = _getch()) != '\r') {  // '\r' = Enter key
        if (ch == '\b') {  // handle backspace
            if (!password.empty()) {
                password.pop_back();
                cout << "\b \b";  // erase the * on console
            }
        }
        else {
            password += ch;
            cout << '*';
        }
    }
    cout << endl;
    return password;
}

int main()
{
    const int maxaccounts{ 5 };
    int accountcount{ 4 };

    // User account data vectors
    vector<string> usernames = { "ajay", "kavya", "narasimha", "sahasra" };
    vector<string> passwords = { "2931", "1234", "1987", "2932" };
    vector<int> balances = { 100000, 200000, 300000, 400000 };
    vector<string> emails = { "ajay@gmail.com", "kavya@gmail.com", "narsimha@gmail.com", "sahasra@gmail.com" };
    vector<string> phones = { "123456789", "8331023474", "9603229090", "987654321" };

    // Per user transaction and loan history vectors
    vector< vector<string> > transactionHistories(accountcount);
    vector< vector<string> > loanHistories(accountcount);

    int accountIndex = -1;
    int withdraw, deposit, opt, loantype;
    double income, loaneligible = 0, totloanwithins = 0;
    string newUsername, newPassword, newEmail, newPhone, currentUsername, currentPassword;
    int fopt;

    // Admin portal credentials
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
        cout << "Enter your choice : ";
        cin >> fopt;

        if (fopt == 1)
        {
            // Admin login
            cout << "Welcome Admin!! " << endl;
            cout << "Enter your name : ";
            cin >> eadname;

            cout << "Enter your password : ";
            eadpass = 0;
            char ch;
            string passStr;
            while ((ch = _getch()) != '\r')  // Mask password input
            {
                eadpass = eadpass * 10 + (ch - '0');
                cout << '*';
            }
            cout << endl;

            if (eadname == adname && eadpass == adpass)
            {
                cout << "\nWelcome - Admin , to the admin portal!!" << endl;

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

                            // Check username already exists
                            bool exists = false;
                            for (const auto& u : usernames) {
                                if (u == newUsername) {
                                    exists = true;
                                    break;
                                }
                            }
                            if (exists) {
                                cout << "Username already exists! Choose another username." << endl;
                                continue;
                            }

                            cout << "Enter new Password: ";
                            newPassword = inputPassword();

                            cout << "Enter new email: ";
                            cin >> newEmail;
                            cout << "Enter new phone number: ";
                            cin >> newPhone;

                            usernames.push_back(newUsername);
                            passwords.push_back(newPassword);
                            balances.push_back(0);
                            emails.push_back(newEmail);
                            phones.push_back(newPhone);

                            // Initialize new user's histories
                            transactionHistories.push_back(vector<string>{});
                            loanHistories.push_back(vector<string>{});

                            accountcount++;
                            cout << "\nAccount created successfully!" << endl;
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
                                transactionHistories.erase(transactionHistories.begin() + i);
                                loanHistories.erase(loanHistories.begin() + i);
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
                    else if (opt == 3)  // Change user details
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
                                newPassword = inputPassword();
                                passwords[i] = newPassword;

                                cout << "Enter new email: ";
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
                cout << "\nSorry, wrong password or username entered. Please try again!!" << endl;
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
                const int maxLoginAttempts = 3;
                int loginAttempts = 0;
                accountIndex = -1;

                while (loginAttempts < maxLoginAttempts)
                {
                    cout << "Enter your username: ";
                    cin >> currentUsername;
                    cout << "Enter your password: ";
                    currentPassword = inputPassword();

                    // Check credentials
                    for (int i = 0; i < accountcount; i++)
                    {
                        if (usernames[i] == currentUsername && passwords[i] == currentPassword)
                        {
                            accountIndex = i;
                            break;
                        }
                    }

                    if (accountIndex != -1)
                    {
                        cout << "Welcome " << currentUsername << "!" << endl;
                        break;  // Successful login
                    }
                    else
                    {
                        loginAttempts++;
                        cout << "Incorrect username or password! Attempts left: " << (maxLoginAttempts - loginAttempts) << endl;
                        if (loginAttempts == maxLoginAttempts)
                        {
                            cout << "Maximum login attempts reached. Returning to main menu." << endl;
                        }
                    }
                }

                if (accountIndex == -1)
                {
                    // Failed login, back to main menu
                    continue;
                }

                // User operations menu
                while (true)
                {
                    cout << "\nPlease select the operation you wantto perform: " << endl;
                    cout << "1. Withdraw" << endl;
                    cout << "2. Deposit" << endl;
                    cout << "3. Check Balance" << endl;
                    cout << "4. Check Transaction History" << endl;
                    cout << "5. Loan Facility" << endl;
                    cout << "6. Logout" << endl;
                    cout << "Enter your choice: ";
                    cin >> opt;

                    if (opt == 1)  // Withdraw
                    {
                        cout << "Enter the amount to withdraw: ";
                        cin >> withdraw;

                        if (withdraw <= balances[accountIndex] && withdraw > 0)
                        {
                            balances[accountIndex] -= withdraw;
                            cout << "Withdrawal successful. Your new balance is: " << balances[accountIndex] << endl;
                            transactionHistories[accountIndex].push_back("Withdraw: -" + to_string(withdraw));
                        }
                        else
                        {
                            cout << "Insufficient funds or invalid amount entered." << endl;
                        }
                    }
                    else if (opt == 2)  // Deposit
                    {
                        cout << "Enter the amount to deposit: ";
                        cin >> deposit;

                        if (deposit > 0)
                        {
                            balances[accountIndex] += deposit;
                            cout << "Deposit successful. Your new balance is: " << balances[accountIndex] << endl;
                            transactionHistories[accountIndex].push_back("Deposit: +" + to_string(deposit));
                        }
                        else
                        {
                            cout << "Invalid deposit amount." << endl;
                        }
                    }
                    else if (opt == 3)  // Check balance
                    {
                        cout << "Your current balance is: " << balances[accountIndex] << endl;
                    }
                    else if (opt == 4)  // Transaction history
                    {
                        cout << "Transaction history for " << usernames[accountIndex] << ":" << endl;
                        if (transactionHistories[accountIndex].empty()) {
                            cout << "No transactions yet." << endl;
                        }
                        else {
                            for (const string& t : transactionHistories[accountIndex]) {
                                cout << t << endl;
                            }
                        }
                    }
                    else if (opt == 5)  // Loan Facility
                    {
                        cout << "\nTo check your loan eligibility, please enter your monthly income: ";
                        cin >> income;

                        loaneligible = income * 5;  // Max loan amount is 5x monthly income

                        cout << "You are eligible for a loan up to: " << loaneligible << endl;

                        cout << "Please enter the total loan amount you already have (if any): ";
                        cin >> totloanwithins;

                        if (totloanwithins > loaneligible)
                        {
                            cout << "Sorry, your existing loans exceed your eligibility. You cannot take a new loan now." << endl;
                        }
                        else
                        {
                            double remainingEligible = loaneligible - totloanwithins;
                            cout << "You can apply for a new loan up to: " << remainingEligible << endl;

                            cout << "Select the type of loan you want:" << endl;
                            cout << "1. Home Loan" << endl;
                            cout << "2. Car Loan" << endl;
                            cout << "3. Education Loan" << endl;
                            cout << "4. Personal Loan" << endl;
                            cout << "Enter your choice: ";
                            cin >> loantype;

                            if (loantype >= 1 && loantype <= 4)
                            {
                                string loanTypeStr;
                                switch (loantype)
                                {
                                case 1: loanTypeStr = "Home Loan"; break;
                                case 2: loanTypeStr = "Car Loan"; break;
                                case 3: loanTypeStr = "Education Loan"; break;
                                case 4: loanTypeStr = "Personal Loan"; break;
                                }

                                double requestedLoan = 0;
                                cout << "Enter the loan amount you want to apply for (max " << remainingEligible << "): ";
                                cin >> requestedLoan;

                                if (requestedLoan > 0 && requestedLoan <= remainingEligible)
                                {
                                    cout << "Your loan for " << loanTypeStr << " of amount " << requestedLoan << " has been approved!" << endl;

                                    // Add loan record for this user
                                    loanHistories[accountIndex].push_back(loanTypeStr + ": " + to_string(requestedLoan));
                                }
                                else
                                {
                                    cout << "Invalid loan amount requested." << endl;
                                }
                            }
                            else
                            {
                                cout << "Invalid loan type selected." << endl;
                            }
                        }
                    }
                    else if (opt == 6)
                    {
                        cout << "Logging out...\n";
                        break;
                    }
                    else
                    {
                        cout << "Invalid option! Please try again." << endl;
                    }
                }
            }
            else if (opt == 2)  // Create new user account
            {
                if (accountcount < maxaccounts)
                {
                    cout << "Enter new Username: ";
                    cin >> newUsername;

                    // Check if username exists
                    bool exists = false;
                    for (const auto& u : usernames)
                    {
                        if (u == newUsername)
                        {
                            exists = true;
                            break;
                        }
                    }

                    if (exists)
                    {
                        cout << "Username already exists! Try again." << endl;
                        continue;
                    }

                    cout << "Enter new Password: ";
                    newPassword = inputPassword();

                    cout << "Enter new email: ";
                    cin >> newEmail;
                    cout << "Enter new phone number: ";
                    cin >> newPhone;

                    usernames.push_back(newUsername);
                    passwords.push_back(newPassword);
                    balances.push_back(0);
                    emails.push_back(newEmail);
                    phones.push_back(newPhone);

                    // Initialize transaction and loan histories for new user
                    transactionHistories.push_back(vector<string>{});
                    loanHistories.push_back(vector<string>{});

                    accountcount++;
                    cout << "\nAccount created successfully!" << endl;
                }
                else
                {
                    cout << "Account limit reached. Can't create more accounts." << endl;
                }
            }
            else if (opt == 3)
            {
                cout << "Exiting user portal..." << endl;
                continue;
            }
            else
            {
                cout << "Invalid option selected." << endl;
            }
        }
        else if (fopt == 3)
        {
            cout << "Thank you for using our bank. Have a great day!" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice! Please select again." << endl;
        }
    }

    return 0;

}
