#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time() to seed the random number generator

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    // Game loop: keep asking for guesses until the correct number is guessed
    do {
        // Increment the attempt counter
        attempts++;

        // Prompt the user for a guess
        cout << "Enter your guess: ";
        cin >> guess;

        // Provide feedback to the user
        if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            // Correct guess
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        }

    } while (guess != randomNumber);

    return 0;
}