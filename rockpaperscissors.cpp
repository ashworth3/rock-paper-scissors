#include <iostream>
#include <cstdlib>
using namespace std;

void game();
void exit();

int main() {
    int startChoice;
    cout << "Hi Welcome, Game is Loading..." << endl;
    cout << "Type '0' to Play" << endl;
    cout << "Type '1' to Quit" << endl;
    cin >> startChoice;
    
    if (startChoice == 0) {
        game();
    } else if (startChoice == 1) {
        exit();
    } else {
        cout << "Invalid choice. Please restart the program and choose 0 to play or 1 to quit." << endl;
    }
    
    return 0;
}

void game() {
    int userChoice = 0; // 1 = Rock, 2 = Paper, 3 = Scissors
    int botChoice;
    int result;
    
    while (true) {
        cout << "Ready to begin? Choose your weapon! (1 = Rock, 2 = Paper, 3 = Scissors): " << endl;
        cin >> userChoice;

        if (userChoice < 1 || userChoice > 3) {
            cout << "Invalid choice, Please choose a valid number i.e. (1, 2, or 3)." << endl;
            continue; // Prompt the user again
        }

        botChoice = rand() % 3 + 1; // Generates a number between 1 and 3

        if (userChoice == 1) {
            if (botChoice == 1) {
                cout << "It's a tie, both chose Rock!" << endl;
            } else if (botChoice == 2) {
                cout << "You lose, Paper beats Rock!" << endl;
            } else {
                cout << "You win, Rock beats Scissors!" << endl;
            }
        } else if (userChoice == 2) {
            if (botChoice == 1) {
                cout << "You win, Paper beats Rock!" << endl;
            } else if (botChoice == 2) {
                cout << "It's a tie, both chose Paper!" << endl;
            } else {
                cout << "You lose, Scissors beats Paper!" << endl;
            }
        } else if (userChoice == 3) {
            if (botChoice == 1) {
                cout << "You lose, Rock beats Scissors!" << endl;
            } else if (botChoice == 2) {
                cout << "You win, Scissors beats Paper!" << endl;
            } else {
                cout << "It's a tie, both chose Scissors!" << endl;
            }
        }
        cout << "Thanks for playing! To play again type '1'." << endl;
        cout << "To quit, type any other number." << endl;
        int endChoice;
        cin >> endChoice;
        if (endChoice != 1) {
            cout << "Goodbye!" << endl;
            break;
        }
    }
}

void exit() {
    cout << "Goodbye!" << endl;
}
