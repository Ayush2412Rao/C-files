#include<iostream>
using namespace std;

template<class T1,class T2>
void multiply(T1 num1,T2 num2)
{
	cout<<num1*num2<<endl;
}

int main()
{
	char num1='A';
	float num2=2;
	cout<<"\nProduct of num1*num2=";
	multiply<char,float>(num1,num2);
	cout<<endl;
	multiply<char,int>(95,2);
	float num3=7.8;
	int num4=3;
	cout<<"\nProduct of num3*num4=";
	multiply<float,int>(num3,num4);
	cout<<endl;
	multiply<float,float>(2.3,4.5);
	return 0;
}
