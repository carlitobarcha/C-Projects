#include <iostream>

int main() {
    int sum = 0;

    // Loop through numbers from 1 to 20
    for (int i = 1; i <= 20; i++) {
        // Check if the number is odd
        if (i % 2 != 0) {
            // Add the square of the odd number to the sum
            sum += i * i;
        }
    }

    // Print the result
    std::cout << "Sum of squares of odd numbers between 1 and 20: " << sum << std::endl;

    return 0;
}

