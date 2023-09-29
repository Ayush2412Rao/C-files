#include<iosteam>
using namespace std;
class Box
{
	private:
		static int length;
		static int breadth;
		static int health;
	public:
		static void print()
		{
			cout<<"The value of the length is:"<<length<<endl;
			cout<<"The vaue of the breadth is"<<breath<<endl;
			cout<<"The vaue of the health is"<<health<<endl;
		}	
};
int Box::length=10;
int Box::breadth=20;
int Box::height=30;
int main()
{
	Box b;
	cout<<"Static member funtion is called through Object name:\n"<<endl;
	b.print();
	cout<<"\n"<<endl;
}
