#include<iostream>
using namespace std;
struct employee
{
	char name[30];
	int age;
	float salary;	
};

int main()
{
	struct employee e1;
	cout<<"Enter Full Name: ";
	cin>>get(e1.name,30);
	cout<<"Enter Age: ";
	cin>>e1.age;
	cout<<"Entenr Salary: ";
	cin>>e1.salary;
	cout<<"Displaying Information: "<<endl;
	cout<<"Name: "<<e1.name<<endl;
	cout<<"Age: "<<e1.age<<endl;
	cout<<"Salary: "<<e1.salary<<endl;
	return 0;
}
