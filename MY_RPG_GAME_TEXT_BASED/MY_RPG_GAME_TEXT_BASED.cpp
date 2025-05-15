#include <iostream>
#include <string>
#include <cstdlib> // for rand()
#include <ctime> // for time()
using namespace std;

int main() {
    srand(time(0)); // Initialize random seed

    // Player stats
    int playerHealth = 100;
    int playerDamage = 20;
    int playerGold = 50;
    int playerLevel = 1;
    int playerPotions = 3;

    string playerClass;
    string actionChoice;

    // Display welcome message
    cout << "Welcome to the Text-based RPG Game!" << endl;

    // Choose character class
    cout << "Choose your character class (Warrior, Mage): ";
    cin >> playerClass;

    // Player stats based on class
    if (playerClass == "Warrior") {
        playerDamage = 30; // Warriors have more damage
    }
    else if (playerClass == "Mage") {
        playerDamage = 15; // Mages have lower damage but more magic attacks
    }
    else {
        cout << "Invalid class, defaulting to Warrior." << endl;
    }

    // Start the game
    while (playerLevel <= 10) {
        // Enemy stats
        int enemyHealth = 50 + (playerLevel * 10);
        int enemyDamage = 10 + (playerLevel * 5);
        bool levelCompleted = false;

        cout << "\n-- Level " << playerLevel << " --" << endl;

        while (!levelCompleted) {
            // Show player stats
            cout << "\nYour Stats: Health: " << playerHealth << ", Damage: " << playerDamage << ", Gold: " << playerGold << ", Potions: " << playerPotions << endl;
            cout << "Enemy Stats: Health: " << enemyHealth << ", Damage: " << enemyDamage << endl;

            // Player's turn to act
            cout << "Choose your action:\n1. Attack\n2. Use Potion (Restore 30 HP)\n3. Flee (Not recommended!)\n";
            cin >> actionChoice;

            if (actionChoice == "1") {
                // Player attacks the enemy
                cout << "You attack the enemy for " << playerDamage << " damage!" << endl;
                enemyHealth -= playerDamage;

                if (enemyHealth <= 0) {
                    cout << "You defeated the enemy!" << endl;
                    playerGold += 20; // Reward for defeating the enemy
                    levelCompleted = true;
                }
                else {
                    // Enemy attacks back
                    cout << "The enemy attacks you for " << enemyDamage << " damage!" << endl;
                    playerHealth -= enemyDamage;
                }
            }
            else if (actionChoice == "2" && playerPotions > 0) {
                // Use potion
                cout << "You used a potion and restored 30 health!" << endl;
                playerHealth += 30;
                playerPotions--;
            }
            else if (actionChoice == "2" && playerPotions == 0) {
                cout << "You don't have any potions left!" << endl;
            }
            else if (actionChoice == "3") {
                // Flee
                cout << "You fled the battle!" << endl;
                playerHealth = 50; // Reset health on fleeing
                levelCompleted = true; // Level is complete after fleeing
            }
            else {
                cout << "Invalid action, please choose a valid option." << endl;
            }

            // Check if player is dead
            if (playerHealth <= 0) {
                cout << "You have been defeated! Game over." << endl;
                return 0; // Exit the game if player dies
            }
        }

        // Player wins the level, move to next level
        cout << "You completed level " << playerLevel << "!" << endl;
        playerLevel++;

        // Offer a shop to buy potions and upgrades
        if (playerLevel < 10) {
            cout << "Welcome to the shop! You have " << playerGold << " gold." << endl;
            cout << "1. Buy Potion (20 Gold)\n2. Upgrade Weapon (50 Gold)\n3. Do Nothing" << endl;
            int shopChoice;
            cin >> shopChoice;

            if (shopChoice == 1 && playerGold >= 20) {
                playerGold -= 20;
                playerPotions++;
                cout << "You bought a potion!" << endl;
            }
            else if (shopChoice == 2 && playerGold >= 50) {
                playerGold -= 50;
                playerDamage += 10;
                cout << "You upgraded your weapon!" << endl;
            }
            else if (shopChoice == 3) {
                cout << "You chose not to buy anything." << endl;
            }
            else {
                cout << "Invalid choice or not enough gold." << endl;
            }
        }
    }

    // Game ends when level 10 is completed
    cout << "\nCongratulations! You have completed the game!" << endl;
    cout << "\nStay Tune for updates (nect RPG v2)!\n\n" << endl;

    return 0;

}