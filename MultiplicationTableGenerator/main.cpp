#include <iostream>
#include <iomanip>  // for formatting the table

using namespace std;

int main() {
    // Set the width for formatting output
    const int width = 4;

    // Print the top row (1 to 10)
    cout << setw(width) << " ";  // First empty space for alignment
    for (int i = 1; i <= 10; ++i) {
        cout << setw(width) << i;
    }
    cout << endl;

    // Print the multiplication table using nested for loops
    for (int i = 1; i <= 10; ++i) {
        // Print the row header (i.e., the number on the left)
        cout << setw(width) << i;

        // Print the values in the row
        for (int j = 1; j <= 10; ++j) {
            cout << setw(width) << i * j;
        }
        cout << endl;
    }

    return 0;
}
