#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int x[120]; // Declare an array of integers named x with size 120

    for (int i = 1; i < n; i++) {
        x[i] = i; // Assign the value of i to the element at index i in the array x
    }

    for (int i = n - 1; i > 0; i--) {
        cout << x[i] << " "; // Print the value of the element at index i in the array x, followed by a space
    }

    return 0; // Indicate successful execution of the main function
}
