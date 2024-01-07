#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int userGuess, attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> userGuess;

        // Check if the guess is correct, too high, or too low
        if (userGuess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts + 1 << " attempts." << endl;
        } else if (userGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }

        attempts++;

    } while (userGuess != secretNumber);

    return 0;
}