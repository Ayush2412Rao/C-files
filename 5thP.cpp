#include<iostream>
using namespace class  {
	// Private section
	public:
		// Public Declarations
	protected:
		// Protected Declarations
};std;
int main()
{
	int a[10],n,low,mid,high,no,i;
	cout<<"Ënter the range of the array";
	cin>>n;
	cout<<"Enter the elements in sorted way: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the no. you want to search: ";
	cin>>no;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==no)
		{
			cout<<"Location="<<mid+1;
			exit(0);
		}
		else if(a[mid]<no)
		{
			low=mid+1;
		}
		else if(a[mid]>no)
		{
			high=mid-1;
		}
	}
	cout<<"No. not found";
	return 0;
}
