#include <iostream>

int main() {
    std::cout << "Prime numbers between 10 and 50 are: ";

    for (int num = 10; num <= 50; ++num) {
        bool isPrime = true;

    
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        
        if (isPrime) {
            std::cout << num << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}

