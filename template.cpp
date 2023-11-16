//#include<iostream>
//using namespace std;
//template<typename T>
//T square(T num)
//{
//	return (num*num);
//}
//int main()
//{
//	int num1=3;
//	cout<<"Square of "<<num1<<" = "<<square<int>(num1);
//	float num2=5.6;
//	cout<<"\nSquare of "<<num1<<" = "<<square<float>(num2);
//	double num3=123.456;
//	cout<<"\nSquare of "<<num1<<" = "<<square<double>(num3);
//}
#include<iostream>
#define MAX 5
using namespace std;
template<class Type>
Type sum(Type A[])
{
	Type Total = 0;
	for(int i=0;i<MAX;i++)
	{
		Total+=A[i];
	}
	return Total;
}
template<class Type>
void read(Type A[])
{
	for(int i=0;i<MAX;i++)
	{
		cin>>A[i];
	}
}
int main()
{
	int Array[MAX];
	float Array1[MAX];
	cout<<"Enter the integer elements : ";
	read<int>(Array);
	cout<<"\nSum of elements = ";
	cout<<sum<int>(Array);
	cout<<"\nEnter the float elements : ";
	read<float>(Array1);
	cout<<"\nSum of elements = ";
	cout<<sum<float>(Array1);
}
