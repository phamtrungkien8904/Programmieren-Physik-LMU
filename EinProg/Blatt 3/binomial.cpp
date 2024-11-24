// exercise in reading code
// explain the function of every single line of the code below
#include <iostream> // Includes the input-output stream library for using cout and cin
#include <vector>   // Includes the vector library for using the vector container
using namespace std; // Uses the standard namespace to avoid prefixing std::

// The main function where the execution of the program begins
int main(){
    // Prompts the user to enter a value for n
    cout << "compute binomial coefficients for n, enter n: ";
    int nFinal; // Declares an integer variable to store the user's input
    cin >> nFinal; // Reads the user's input and stores it in nFinal

    // Checks if the input is outside the valid range (0 < n <= 10)
    if (0 > nFinal or nFinal > 10) {
        // Prints an error message if the input is invalid
        cout << "need 0<n and limited to n<=10, got: " << nFinal << endl;
        exit(0); // Exits the program
    }

    // Initializes a vector with two elements, both set to 1
    vector<int> binomN(2, 1);

    // Loops from 1 to nFinal-1 to compute the binomial coefficients
    for (int n = 1; n < nFinal; n++) {
        // Initializes a new vector with one element set to 1
        vector<int> next(1, 1);

        // Loops through the current binomial coefficients to compute the next row
        for (size_t k = 1; k < binomN.size(); k++) {
            // Adds the sum of two adjacent elements from the current row to the next row
            next.push_back(binomN[k-1] + binomN[k]);
        }

        // Adds 1 to the end of the next row
        next.push_back(1);

        // Updates the current row to the next row
        binomN = next;
    }

    // Prints the computed binomial coefficients
    cout << "Binomial coefficients for n=" << nFinal << endl;
    for (auto n : binomN) cout << " " << n; // Loops through the vector and prints each coefficient
    cout << endl; // Prints a newline character

    return 0; // Returns 0 to indicate successful execution
}
