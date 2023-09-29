#include<iostream>
using namespace std;
int main
{
	int a[10],n,i,no;
	cout<<"Enter the range of the array: ";
	cin>>n;
	cout<<"Ënter the elements of this array: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element you want to search";
	cin>>no;
	for(i=0;i<n;i++)
	{
		if(a[i]==no)
		{
			break;
		}
	}
	if(i==n)
	{
		cout<<"No. is not found";
	}
	else
	{
		cout<<"Element present in at"<<i+1;
	}
	return 0;
}
