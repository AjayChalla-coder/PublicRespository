// ROCK_PAPER_SCISSORS_GAME
// DATE   :: 30/04/25
// AUTHOR :: NARASIMHA

#include <iostream>
#include <cstdlib>  // For rand() function
using namespace std;

int main() {
    int player_choice, computer_choice;
    string choices[] = { "Rock", "Paper", "Scissors" };
    char play_again;

    cout << "\t\t\t\tWELCOME TO ROCK, PAPER, SCISSORS!" << endl;

    // Main game loop
    while (true) {
        cout << "\nChoose your move:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "Enter your choice (1/2/3): ";
        cin >> player_choice;

        // Simulate computer's random choice
        computer_choice = (rand() % 3) + 1;  // Generates a number between 1 and 3

        // Display choices
        cout << "You chose: " << choices[player_choice - 1] << endl;
        cout << "Computer chose: " << choices[computer_choice - 1] << endl;

        // Determine the winner
        if (player_choice == computer_choice) {
            cout << "It's a tie!" << endl;
        }
        else if ((player_choice == 1 && computer_choice == 3) ||
            (player_choice == 2 && computer_choice == 1) ||
            (player_choice == 3 && computer_choice == 2)) {
            cout << "You win!" << endl;
        }
        else {
            cout << "You lose!" << endl;
        }

        // Ask the player if they want to play again
        cout << "\nDo you want to play again? (y/n): ";
        cin >> play_again;

        if (play_again == 'n' || play_again == 'N') {
            cout << "Thanks for playing! Goodbye!" << endl;
            break;  // Exit the loop and end the game
        }
    }

    return 0;
}