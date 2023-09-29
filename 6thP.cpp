#include<iostream>
using namespace std;
class operation
{
	int a,b,add;
	public:
		void get()//inline member function
		{
			cout<<"Enter first value:";
			cin>>a;
			cout<<"Enter second value:";
			cin>>b;
		}
		void sum();
}s;
inline void operation::sum()
{
	add=a+b;
	cout<<"Addition of 2 numbers:"<<a+b;
}
int main()
{
	cout<<"Programming inline functions\n";
	s.get();
	s.sum();
	return 0;
}
