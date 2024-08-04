#include <iostream>
using namespace std;
 int facto(int pInt1)
{
	int x= pInt1;
	int result= 1;
	for(int m=x; m>=2; m--)
	{
		result=result*m;
	}
		
	
	return result; 
}
 
 
 
 int main()
 { int a;
 	cout<<"Write a number of which you want to find Factorial"<<endl;
 	cin>>a;
 	int x = facto(a);
 	cout<<"Factorial = "<<x<<endl;
 	
 }
