#include <iostream>

int main() {
    int sum = 0;

 
    for (int i = 1; i <= 20; i++) {
       
        if (i % 2 != 0) {
           
            sum += i * i;
        }
    }

    // Print the result
    std::cout << "Sum of squares of odd numbers between 1 and 20: " << sum << std::endl;

    return 0;
}

