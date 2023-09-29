#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void fill()
		{
			cin>>a;
			cout<<a;
			
		}
};
int main()
{
	int c;
	A oba;
	oba.a=10;//invalid as 'a' is private member.
	oba.fill();//valid as fill() is a public member.
	return 0;
}
