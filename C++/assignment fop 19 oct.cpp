#include <iostream>
using namespace std;
int main() 
{
    int num1, num2;
    char op;

    cout<< "Enter the first number : ";
    cin>> num1;

    cout<< "Enter the operator : ";
    cin>> op;

    cout<< "Enter the second number : ";
    cin>> num2;

    int result;
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/': 
            result = num1 / num2;
            break;        
        default:
            cout << "Invalid operator" <<  endl;
            return 0;
    }

    cout << "Result:"<<num1<< ""<<op<<""<<num2<<" = "<<result<<endl;

        return 0;    
}
