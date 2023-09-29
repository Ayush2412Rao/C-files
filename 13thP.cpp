#include<string>
#include<iostream>
using namespace std;
class rectangle
{
	public:
		float width,height,area;
		getdim()
		{
			cout<<"Enter the dimensions: "<<endl;
			cin>>width>>height;
			
		}
		outdim()
		{
			area=height*width;
			cout<<"The calculated area is: "<<area<<endl;
		}
};
int main()
{
	rectangle r1,r2;
	r1.getdim();
	r2.getdim();
	if((r1.height==r2.height)&&(r1.width==r2.width))
	{
		cout<<"Both rectangles have same dimensions!!"<<endl;
	}
	else
	{
		cout<<"Both rectangle have different dimensions!!";
	}
	r1.outdim();
	r2.outdim();
	return 0;
	
}
