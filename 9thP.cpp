#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,j,temp;
	cout<<"Enter the range of this array:";
	cin>>n;
	cout<<"Enter all elements of the array: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"After sorting the array is";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
