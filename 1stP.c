#include<iostream>
using namespace std;
class xyz
{
	int number;
	float cost;
	public:
		void returndata(int a,float b);
		void getdata(void)
		{
			cout<<"Enter the number:";
			cin>>number;
			cout<<"Enter the cost:";
			cin>>cost;
		}
};
void xyz::returndata(int a,float b)
{
	cout<<"The Entered number is:"cout<<number;
	cout<<"The Entered cost is:"cout<<cost;
}
void main()
{
	item x;
	cout<<"In item x:";
	x.getdata(100,299.99);
	x.returndata();
	item y;
	cout<<"In item y:";
	y.getdata(200,300.99);
	y.returndata();
}
