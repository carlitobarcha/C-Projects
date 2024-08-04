#include<iostream>
using namespace std;
int main()
{
	int scores[5];
	int total = 0;
	for(int i=0; i<5; ++i)
	{
		cout<<"Enter Score for player "<<i+1<<":";
		cin>>scores[i];
		total+=scores[i];
	}
		double average=static_caste<<double>>(total)/5;
		cout<<"average score of the players:"<<average<<endl;
		
		
		return 0;
		
	}
