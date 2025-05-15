// QUIZ_GAME
// DATE   :: 28/04/25
// AUTHOR :: CHALLA AJAY

#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int answer;
    int correctAnswers[30] = { 2, 3, 2, 2, 1, 2, 1, 2, 2, 4,
                               1, 1, 3, 2, 1, 3, 1, 3, 2, 1,
                               3, 2, 4, 1, 2, 3, 1, 2, 3, 4 };
    int userAnswers[30];

    cout << "==================================================\n";
    cout << "         WELCOME TO THE ULTIMATE QUIZ GAME!         \n";
    cout << "==================================================\n\n";

    cout << "Instructions:\n";
    cout << "- You will be asked 30 questions.\n";
    cout << "- Each question has 4 options, choose carefully.\n";
    cout << "- Enter the option number (1-4) as your answer.\n\n";

    cout << "Let's begin the quiz! Best of luck!\n\n";

    // Question 1
    cout << "--------------------------------------------------\n";
    cout << "Question 1: What is the capital of India?\n";
    cout << "Options:\n";
    cout << "1) Mumbai\n";
    cout << "2) New Delhi\n";
    cout << "3) Hyderabad\n";
    cout << "4) Chennai\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[0];
    if (userAnswers[0] == correctAnswers[0]) score++;

    // Question 2
    cout << "--------------------------------------------------\n";
    cout << "Question 2: How many continents are there?\n";
    cout << "Options:\n";
    cout << "1) 5\n";
    cout << "2) 6\n";
    cout << "3) 7\n";
    cout << "4) 8\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[1];
    if (userAnswers[1] == correctAnswers[1]) score++;

    // Question 3
    cout << "--------------------------------------------------\n";
    cout << "Question 3: Who invented the light bulb?\n";
    cout << "Options:\n";
    cout << "1) Albert Einstein\n";
    cout << "2) Thomas Edison\n";
    cout << "3) Isaac Newton\n";
    cout << "4) Nikola Tesla\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[2];
    if (userAnswers[2] == correctAnswers[2]) score++;

    // Question 4
    cout << "--------------------------------------------------\n";
    cout << "Question 4: What is H2O commonly known as?\n";
    cout << "Options:\n";
    cout << "1) Hydrogen\n";
    cout << "2) Water\n";
    cout << "3) Oxygen\n";
    cout << "4) Salt\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[3];
    if (userAnswers[3] == correctAnswers[3]) score++;

    // Question 5
    cout << "--------------------------------------------------\n";
    cout << "Question 5: Which planet is called the Red Planet?\n";
    cout << "Options:\n";
    cout << "1) Mars\n";
    cout << "2) Venus\n";
    cout << "3) Jupiter\n";
    cout << "4) Saturn\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[4];
    if (userAnswers[4] == correctAnswers[4]) score++;

    // Question 6
    cout << "--------------------------------------------------\n";
    cout << "Question 6: What is the national animal of India?\n";
    cout << "Options:\n";
    cout << "1) Lion\n";
    cout << "2) Tiger\n";
    cout << "3) Elephant\n";
    cout << "4) Peacock\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[5];
    if (userAnswers[5] == correctAnswers[5]) score++;

    // Question 7
    cout << "--------------------------------------------------\n";
    cout << "Question 7: What is the boiling point of water?\n";
    cout << "Options:\n";
    cout << "1) 100 degrees Celsius\n";
    cout << "2) 90 degrees Celsius\n";
    cout << "3) 80 degrees Celsius\n";
    cout << "4) 70 degrees Celsius\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[6];
    if (userAnswers[6] == correctAnswers[6]) score++;

    // Question 8
    cout << "--------------------------------------------------\n";
    cout << "Question 8: Who was the first Prime Minister of India?\n";
    cout << "Options:\n";
    cout << "1) Mahatma Gandhi\n";
    cout << "2) Jawaharlal Nehru\n";
    cout << "3) Subhas Chandra Bose\n";
    cout << "4) Sardar Patel\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[7];
    if (userAnswers[7] == correctAnswers[7]) score++;

    // Question 9
    cout << "--------------------------------------------------\n";
    cout << "Question 9: Which gas do plants absorb?\n";
    cout << "Options:\n";
    cout << "1) Oxygen\n";
    cout << "2) Carbon Dioxide\n";
    cout << "3) Nitrogen\n";
    cout << "4) Hydrogen\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[8];
    if (userAnswers[8] == correctAnswers[8]) score++;

    // Question 10
    cout << "--------------------------------------------------\n";
    cout << "Question 10: What is the largest ocean?\n";
    cout << "Options:\n";
    cout << "1) Atlantic Ocean\n";
    cout << "2) Indian Ocean\n";
    cout << "3) Arctic Ocean\n";
    cout << "4) Pacific Ocean\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[9];
    if (userAnswers[9] == correctAnswers[9]) score++;

    // Question 11
    cout << "--------------------------------------------------\n";
    cout << "Question 11: What is the freezing point of water?\n";
    cout << "Options:\n";
    cout << "1) 0 degrees Celsius\n";
    cout << "2) 100 degrees Celsius\n";
    cout << "3) -10 degrees Celsius\n";
    cout << "4) 10 degrees Celsius\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[10];
    if (userAnswers[10] == correctAnswers[10]) score++;

    // Question 12
    cout << "--------------------------------------------------\n";
    cout << "Question 12: Who discovered gravity?\n";
    cout << "Options:\n";
    cout << "1) Newton\n";
    cout << "2) Einstein\n";
    cout << "3) Galileo\n";
    cout << "4) Darwin\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[11];
    if (userAnswers[11] == correctAnswers[11]) score++;

    // Question 13
    cout << "--------------------------------------------------\n";
    cout << "Question 13: How many players are there in a cricket team?\n";
    cout << "Options:\n";
    cout << "1) 9\n";
    cout << "2) 10\n";
    cout << "3) 11\n";
    cout << "4) 12\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[12];
    if (userAnswers[12] == correctAnswers[12]) score++;

    // Question 14
    cout << "--------------------------------------------------\n";
    cout << "Question 14: Who painted the Mona Lisa?\n";
    cout << "Options:\n";
    cout << "1) Vincent Van Gogh\n";
    cout << "2) Leonardo da Vinci\n";
    cout << "3) Pablo Picasso\n";
    cout << "4) Michelangelo\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[13];
    if (userAnswers[13] == correctAnswers[13]) score++;

    // Question 15
    cout << "--------------------------------------------------\n";
    cout << "Question 15: Which is the longest river in the world?\n";
    cout << "Options:\n";
    cout << "1) Nile\n";
    cout << "2) Amazon\n";
    cout << "3) Yangtze\n";
    cout << "4) Mississippi\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[14];
    if (userAnswers[14] == correctAnswers[14]) score++;

    // Question 16
    cout << "--------------------------------------------------\n";
    cout << "Question 16: What is the currency of Japan?\n";
    cout << "Options:\n";
    cout << "1) Dollar\n";
    cout << "2) Yuan\n";
    cout << "3) Yen\n";
    cout << "4) Won\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[15];
    if (userAnswers[15] == correctAnswers[15]) score++;

    // Question 17
    cout << "--------------------------------------------------\n";
    cout << "Question 17: Which country is known as the Land of the Rising Sun?\n";
    cout << "Options:\n";
    cout << "1) Japan\n";
    cout << "2) China\n";
    cout << "3) Korea\n";
    cout << "4) India\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[16];
    if (userAnswers[16] == correctAnswers[16]) score++;

    // Question 18
    cout << "--------------------------------------------------\n";
    cout << "Question 18: What is the smallest prime number?\n";
    cout << "Options:\n";
    cout << "1) 0\n";
    cout << "2) 1\n";
    cout << "3) 2\n";
    cout << "4) 3\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[17];
    if (userAnswers[17] == correctAnswers[17]) score++;

    // Question 19
    cout << "--------------------------------------------------\n";
    cout << "Question 19: Who wrote 'Romeo and Juliet'?\n";
    cout << "Options:\n";
    cout << "1) Charles Dickens\n";
    cout << "2) William Shakespeare\n";
    cout << "3) Mark Twain\n";
    cout << "4) Jane Austen\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[18];
    if (userAnswers[18] == correctAnswers[18]) score++;

    // Question 20
    cout << "--------------------------------------------------\n";
    cout << "Question 20: Which is the largest desert in the world?\n";
    cout << "Options:\n";
    cout << "1) Sahara Desert\n";
    cout << "2) Arabian Desert\n";
    cout << "3) Kalahari Desert\n";
    cout << "4) Antarctica\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[19];
    if (userAnswers[19] == correctAnswers[19]) score++;

    // Question 21
    cout << "--------------------------------------------------\n";
    cout << "Question 21: Who developed the theory of relativity?\n";
    cout << "Options:\n";
    cout << "1) Newton\n";
    cout << "2) Einstein\n";
    cout << "3) Galileo\n";
    cout << "4) Darwin\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[20];
    if (userAnswers[20] == correctAnswers[20]) score++;

    // Question 22
    cout << "--------------------------------------------------\n";
    cout << "Question 22: What is the square root of 144?\n";
    cout << "Options:\n";
    cout << "1) 10\n";
    cout << "2) 12\n";
    cout << "3) 14\n";
    cout << "4) 16\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[21];
    if (userAnswers[21] == correctAnswers[21]) score++;

    // Question 23
    cout << "--------------------------------------------------\n";
    cout << "Question 23: What is the chemical symbol for gold?\n";
    cout << "Options:\n";
    cout << "1) Ag\n";
    cout << "2) Au\n";
    cout << "3) Pb\n";
    cout << "4) Fe\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[22];
    if (userAnswers[22] == correctAnswers[22]) score++;

    // Question 24
    cout << "--------------------------------------------------\n";
    cout << "Question 24: Who is the author of Harry Potter series?\n";
    cout << "Options:\n";
    cout << "1) J.R.R. Tolkien\n";
    cout << "2) George R.R. Martin\n";
    cout << "3) J.K. Rowling\n";
    cout << "4) C.S. Lewis\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[23];
    if (userAnswers[23] == correctAnswers[23]) score++;

    // Question 25
    cout << "--------------------------------------------------\n";
    cout << "Question 25: What is the speed of light?\n";
    cout << "Options:\n";
    cout << "1) 299,792,458 m/s\n";
    cout << "2) 150,000,000 m/s\n";
    cout << "3) 1,000,000 m/s\n";
    cout << "4) 3,000,000 m/s\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[24];
    if (userAnswers[24] == correctAnswers[24]) score++;

    // Question 26
    cout << "--------------------------------------------------\n";
    cout << "Question 26: Who painted the 'Starry Night'?\n";
    cout << "Options:\n";
    cout << "1) Van Gogh\n";
    cout << "2) Picasso\n";
    cout << "3) Da Vinci\n";
    cout << "4) Matisse\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[25];
    if (userAnswers[25] == correctAnswers[25]) score++;

    // Question 27
    cout << "--------------------------------------------------\n";
    cout << "Question 27: Who wrote 'The Catcher in the Rye'?\n";
    cout << "Options:\n";
    cout << "1) Mark Twain\n";
    cout << "2) J.D. Salinger\n";
    cout << "3) Harper Lee\n";
    cout << "4) George Orwell\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[26];
    if (userAnswers[26] == correctAnswers[26]) score++;

    // Question 28
    cout << "--------------------------------------------------\n";
    cout << "Question 28: What is the capital of France?\n";
    cout << "Options:\n";
    cout << "1) Rome\n";
    cout << "2) Paris\n";
    cout << "3) London\n";
    cout << "4) Madrid\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[27];
    if (userAnswers[27] == correctAnswers[27]) score++;

    // Question 29
    cout << "--------------------------------------------------\n";
    cout << "Question 29: Who was the first man to walk on the moon?\n";
    cout << "Options:\n";
    cout << "1) Buzz Aldrin\n";
    cout << "2) Neil Armstrong\n";
    cout << "3) Michael Collins\n";
    cout << "4) Yuri Gagarin\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[28];
    if (userAnswers[28] == correctAnswers[28]) score++;

    // Question 30
    cout << "--------------------------------------------------\n";
    cout << "Question 30: What is the largest animal on Earth?\n";
    cout << "Options:\n";
    cout << "1) Elephant\n";
    cout << "2) Whale\n";
    cout << "3) Dinosaur\n";
    cout << "4) Giraffe\n";
    cout << "Enter your answer (1-4): ";
    cin >> userAnswers[29];
    if (userAnswers[29] == correctAnswers[29]) score++;

    cout << "--------------------------------------------------\n";
    cout << "Your total score: " << score << " out of 30\n";
    cout << "==================================================\n";

    return 0;
}

