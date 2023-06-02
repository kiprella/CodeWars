#include <iostream>
#include <string>

using namespace std;

int main() {
    string zodis = "Hello";  // Declare and initialize a string variable
    string naujasZodis;      // Declare an empty string variable
    char x[] = {'a', 'e', 'i', 'o', 'u'};  // Declare an array of vowels

    // Loop through each character in the "zodis" string
    for (int i = 0; i < zodis.length(); i++) {
        bool isVowel = false;  // Flag to track if the character is a vowel

        // Loop through each vowel in the "x" array
        for (int j = 0; j < 5; j++) {
            // Check if the current character is equal to a vowel
            if (zodis[i] == x[j]) {
                isVowel = true;  // Set the flag to true if it's a vowel
                break;           // Exit the inner loop since a vowel is found
            }
        }

        // If the current character is not a vowel, append it to the "naujasZodis" string
        if (!isVowel) {
            naujasZodis += zodis[i];
        }
    }

    // Print the resulting string without vowels
    cout << naujasZodis << endl;

    return 0;  // Return 0 to indicate successful execution of the "main" function
}
