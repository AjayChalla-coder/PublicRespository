// TIC_TAC_TOE
// DATE   :: 30/04/25
// AUTHOR :: CHALLA AJAY

#include <iostream>
using namespace std;

int main() {
    char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
    int move;
    char turn = 'X';

    while (true) {
        // Display board
        cout << "\n " << a << " | " << b << " | " << c << "\n";
        cout << "---|---|---\n";
        cout << " " << d << " | " << e << " | " << f << "\n";
        cout << "---|---|---\n";
        cout << " " << g << " | " << h << " | " << i << "\n";

        // Get move
        cout << "Player " << turn << ", enter move (1-9): ";
        cin >> move;

        // Place move
        if (move == 1 && a == '1') a = turn;
        else if (move == 2 && b == '2') b = turn;
        else if (move == 3 && c == '3') c = turn;
        else if (move == 4 && d == '4') d = turn;
        else if (move == 5 && e == '5') e = turn;
        else if (move == 6 && f == '6') f = turn;
        else if (move == 7 && g == '7') g = turn;
        else if (move == 8 && h == '8') h = turn;
        else if (move == 9 && i == '9') i = turn;
        else {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        // Win check
        if ((a == b && b == c) || (d == e && e == f) || (g == h && h == i) ||
            (a == d && d == g) || (b == e && e == h) || (c == f && f == i) ||
            (a == e && e == i) || (c == e && e == g)) {
            cout << "\nPlayer " << turn << " wins!\n";
            break;
        }

        // Draw check
        if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' &&
            f != '6' && g != '7' && h != '8' && i != '9') {
            cout << "\nIt's a draw!\n";
            break;
        }

        // Switch turn
        turn = (turn == 'X') ? 'O' : 'X';
    }

    return 0;
}