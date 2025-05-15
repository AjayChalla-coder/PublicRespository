// VIRTUAL_PET
// DATE   :: 01/04/25
// AUTHOR :: CHALLA AJAY

#include <iostream>
using namespace std;

int main()
{
    int hungry = 5;
    int happiness = 5;
    int opt;
    int hungopt;
    int opt3;

    cout << "\t\t\t\t      ******************************* " << endl;
    cout << "\t\t\t\t      *WELCOME TO YOUR VIRTUAL PET* " << endl;
    cout << "\t\t\t\t      ******************************* " << endl;

    while (true)
    {
        cout << "\nYour Pet Status:" << endl;
        cout << "Hungry: " << hungry << " (0 = not hungry, 10 = very hungry)" << endl;
        cout << "Happiness: " << happiness << " (0 = very sad, 10 = very happy)" << endl;

        cout << "\nEnter an option from below: " << endl;
        cout << "1. Feed your pet." << endl;
        cout << "2. Make it play." << endl;
        cout << "3. Exit." << endl;
        cout << "Enter your choice: ";
        cin >> opt;

        if (opt == 1)
        {
            if (hungry > 0)
            {
                hungry -= 1;
                cout << "Your pet is less hungry now." << endl;
                cout << "Do you want to check your pet's hunger level? (1 = Yes, 2 = No): ";
                cin >> hungopt;

                if (hungopt == 1)
                {
                    cout << "Hungry: " << hungry << endl;
                }
            }
            else
            {
                cout << "Your pet is not hungry right now!" << endl;
            }
        }
        else if (opt == 2)
        {
            if (happiness < 10) happiness += 1;
            if (hungry < 10) hungry += 1;

            cout << "Your pet is happier now!" << endl;
            cout << "Do you want to check your pet stats? (1 = Yes, 2 = No): ";
            cin >> opt3;

            if (opt3 == 1)
            {
                cout << "Your Pet Status:" << endl;
                cout << "Hungry: " << hungry << endl;
                cout << "Happiness: " << happiness << endl;
            }
        }
        else if (opt == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid option. Please try again." << endl;
        }
    }

    cout << "Your Pet says BYE - BYE!!" << endl;

    return 0;
}
