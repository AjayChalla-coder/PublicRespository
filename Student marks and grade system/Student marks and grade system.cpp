// Student marks and grade system
// DATE   :: 27/04/25
// AUTHOR :: CHALLA AJAY

#include <iostream>
#include <string>  // Added for using string
#include <iomanip> // For setting precision
using namespace std;

int main()
{
    int opt;
    string std_name;  // changed to string
    int std_no;
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    int sub6;
    int sub7;

    cout << "\t\t\t       WELCOME TO OUR MARKS AND GRADE CALCULATION SYSTEM" << endl;
    cout << "\t\t\t       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;

    while (true)
    {
        cout << "\nEnter an option :: " << endl;
        cout << "1. CALCULATE" << endl;
        cout << "2. EXIT" << endl;
        cout << "Option: ";
        cin >> opt;

        if (opt == 1)
        {
            cout << "Enter Student's name   : ";
            cin >> std_name;

            cout << "Enter Student's number : ";
            cin >> std_no;

            cout << "Enter marks for 7 subjects:" << endl;
            cout << "Subject 1: "; cin >> sub1;
            cout << "Subject 2: "; cin >> sub2;
            cout << "Subject 3: "; cin >> sub3;
            cout << "Subject 4: "; cin >> sub4;
            cout << "Subject 5: "; cin >> sub5;
            cout << "Subject 6: "; cin >> sub6;
            cout << "Subject 7: "; cin >> sub7;

            int total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6 + sub7;
            float percentage = total / 7.0;

            cout << "\n----- Student Report -----\n";
            cout << "Name        : " << std_name << endl;
            cout << "Student No. : " << std_no << endl;
            cout << "Total Marks : " << total << "/700" << endl;

            // Display percentage with 2 decimal places
            cout << fixed << setprecision(2);
            cout << "Percentage  : " << percentage << "%" << endl;

            // Grade Calculation
            if (percentage >= 90)
                cout << "Grade: A+" << endl;
            else if (percentage >= 80)
                cout << "Grade: A" << endl;
            else if (percentage >= 70)
                cout << "Grade: B" << endl;
            else if (percentage >= 60)
                cout << "Grade: C" << endl;
            else if (percentage >= 50)
                cout << "Grade: D" << endl;
            else
                cout << "Grade: F (Fail)" << endl;
        }
        else
        {
            cout << "Exiting the system... Thank you!" << endl;
            break;
        }
    }
    return 0;
}
