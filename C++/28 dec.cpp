#include <iostream>
using namespace std;

struct employee {
	int salary;
	string name;
	int employeeID;
	
	
};

int main()
{
	int avg;
	employee e1, e2 ,e3;
	
		//for employee 1
	cin>>e1.salary;
	cin>>e1.name;
	cin>>e1.employeeID;
	
	cout<<e1.salary<<endl;
	cout<<e1.name<<endl;
	cout<<e1.employeeID;
	
    	//for employee 2
    cin>>e2.salary;
    cin>>e2.name;
	cin>>e2.employeeID;
	
	cout<<e2.salary<<endl;
	cout<<e2.name<<endl;
	cout<<e2.employeeID;
	
		//for employee 3
	cin>>e3.salary;
	cin>>e3.name;
	cin>>e3.employeeID;
	
	cout<<e3.salary<<endl;
	cout<<e3.name<<endl;
	cout<<e3.employeeID;
	
	
	avg = (e1.salary+e2.salary+e3.salary)/3;
	cout<<"avg"<<avg<<endl;
	

	return 0;
}
