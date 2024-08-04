#include <iostream>
using namespace std;
int main() {
    int a;

    
    cout << "Enter an number: ";
    cin >>a;

     if(a > 0){
     	if(a%2 == 0){
     		cout<<"it is positive "<<endl;
     		cout<<"it is even"<<endl;
		 }
		 else if (a%2 ==1){
		 cout<<"it is positive"<<endl;
		 cout<<"it is odd"<<endl;
		 
	 }
}
	 
        else if (a < 0){
        	cout<<"it is negative"<<endl;
    }

    return 0;
}

