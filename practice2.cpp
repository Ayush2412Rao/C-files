#include<iostream>
using namespace std;
int main()
{
	enum day{Monday, Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
	enum day day1=Wednesday,day2=Friday;
	if(day1>day2)
	{
		cout<<"Day1 is greater";
	}
	else if(day1<day2)
	{
		cout<<"Day2 is greater";
	}
	else
	{
		cout<<"Error";
	}
}
