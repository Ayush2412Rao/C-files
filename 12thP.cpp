#include<iostream>
using namespace std;
class THuman
{
	public:
		string name;
		int age,height;
		void get()
		{
			cin>>this->name>>this->age>>this->height;
		}
		void disp()
		{
			cout<<this->name<<'|'<<this->age<<'|'<<this->height<<"\n";
		}
};
int main()
{
	THuman *worker[2];
	for(int i=0;i<2;i++)
	{
		worker[i]=new THuman;
	}
	for(int i=0;i<2;i++)
	{
		worker[i]->get();
	}
	for(int i=0;i<2;i++)
	{
		worker[i]->disp();
	}
	for(int i=0;i<2;i++)
	{
		delete worker[i];
	}
}
