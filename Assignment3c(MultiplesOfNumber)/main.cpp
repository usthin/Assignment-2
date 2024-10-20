#include <iostream>

using namespace std;

int main() {
    // Declare variables for the number and how many multiples to print
    int number, multiples;

    // Prompt the user to input the number
    cout << "Enter the number: ";
    cin >> number;

    // Prompt the user to input how many multiples to print
    cout << "Enter how many multiples to print: ";
    cin >> multiples;

    // Print the first N multiples of the given number
    cout << "The first " << multiples << " multiples of " << number << " are:" << endl;

    for (int i = 1; i <= multiples; ++i) {
        cout << number * i << " ";
    }

    cout << endl;

    return 0;
}
