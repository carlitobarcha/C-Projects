#include<iostream>
using namespace std;
int main(){
	
int number;
long factorial =1;
cout <<"enter a positive integer: ";
cin >> number;
   
   for (int i = 1; i<= number;i++) {
        factorial *= i;
		 }
   cout << "factorial of " << number << " is " << factorial << endl;
   
   return 0;	
}
