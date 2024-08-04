#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter the total Size of the Array"<<endl;
	cin>>a;
	int arr[a], min, min1, min2;
	
	cout<<"Enter numbers of your array"<<endl;
	for(int i=0; i<a; i++)
	{
		cin>>arr[i];
	}
	for(int i=1; i<a; i++)
	{
	
		if(arr[i] == arr[i-1])
		{
			min1=arr[i];
		}
	}
	cout<<"frequent number is "<<min1<<endl;
	

	
	return 0;
}
