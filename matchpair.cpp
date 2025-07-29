#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

int col1;
int row1;
int col2;
int row2;
int score;

void displayGrid(string grid[6][6]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

void chooseElement1() {
    while (true) {
        cout << "Choose a row number (0-5): ";
        cin >> row1;
        if (row1 < 0 || row1 > 5) {
            cout << "Invalid row number. Please enter a number between 0 and 5." << endl;
        } else {
            break;
        }
    }

    while (true) {
        cout << "Choose a column number (0-5): ";
        cin >> col1;
        if (col1 < 0 || col1 > 5) {
            cout << "Invalid column number. Please enter a number between 0 and 5." << endl;
        } else {
            break;
        }
    }
}

void chooseElement2() {
    while (true) {
        cout << "Choose a row number (0-5): ";
        cin >> row2;
        if (row2 < 0 || row2 > 5) {
            cout << "Invalid row number. Please enter a number between 0 and 5." << endl;
        } else {
            break;
        }
    }

    while (true) {
        cout << "Choose a column number (0-5): ";
        cin >> col2;
        if (col2 < 0 || col2 > 5) {
            cout << "Invalid column number. Please enter a number between 0 and 5." << endl;
        } else {
            break;
        }
    }
}

int main() {
    string pair[6][6] = {
        {"A", "B", "C", "D", "E", "F"},
        {"G", "H", "I", "A", "J", "K"},
        {"L", "B", "M", "N", "C", "O"},
        {"P", "D", "Q", "E", "R", "F"},
        {"G", "S", "H", "I", "J", "T"},
        {"K", "L", "M", "N", "O", "P"}
    };

    string hidden[6][6] = {
        {"[0][0]", "[0][1]", "[0][2]", "[0][3]", "[0][4]", "[0][5]"},
        {"[1][0]", "[1][1]", "[1][2]", "[1][3]", "[1][4]", "[1][5]"},
        {"[2][0]", "[2][1]", "[2][2]", "[2][3]", "[2][4]", "[2][5]"},
        {"[3][0]", "[3][1]", "[3][2]", "[3][3]", "[3][4]", "[3][5]"},
        {"[4][0]", "[4][1]", "[4][2]", "[4][3]", "[4][4]", "[4][5]"},
        {"[5][0]", "[5][1]", "[5][2]", "[5][3]", "[5][4]", "[5][5]"}
    };

    cout << "Welcome to the Match Pair Game!" << endl;
    cout << "Here is the grid of pairs:" << endl;
    displayGrid(hidden);

    while (true) {
        chooseElement1();
        cout << "You chose: [" << row1 << "," << col1 << "]" << endl;
        cout << "Element at [" << row1 << "," << col1 << "] : " << pair[row1][col1] << endl;

        chooseElement2();
        cout << "You chose: [" << row2 << "," << col2 << "]" << endl;
        cout << "Element at [" << row2 << "," << col2 << "] : " << pair[row2][col2] << endl;

        if (pair[row1][col1] == pair[row2][col2]) {
            cout << "You found a correct match!" << endl;
            hidden[row1][col1] = pair[row1][col1];
            hidden[row2][col2] = pair[row2][col2];
            displayGrid(hidden);
        } else {
            cout << "Wrong match!" << endl;
            Sleep(1500);  
            system("cls");
            cout << "Wrong match!" << endl;
            displayGrid(hidden);
        }

       
        bool gameComplete = true;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                if (hidden[i][j] != pair[i][j]) {
                    gameComplete = false;
                    break;
                }
            }
            if (!gameComplete) break;
        }

        if (gameComplete) {
            cout << "Congratulations! You've matched all pairs!" << endl;
            break;
        }
    }

}
