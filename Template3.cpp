#include<iostream>
using namespace std;
#define MAX 5
template<class Type>
Type sum(Type A[])
{
	Type Total=0;
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
	cout<<"\nEnter the integer array elements:";
	read<int>(Array);
	cout<<"\nSum of elements="<<sum<int>(Array);
	cout<<"\nEnter the float array elements:";
	read<float>(Array1);
	cout<<"\nSum of elements="<<sum<float>(Array1);
	return 0;
}
