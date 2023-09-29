#include<iostream>
#include<string>
using namespace std;


union Employee
{
  int empid;
  string empname;
  string empdob;
  string empdoj;
  float salary;
};
int main()
{
    Employee P1;
    cin>>P1.empid;
    cin>>gets(P1.empname);
    cin>>gets(P1.empdob);
    cin>>gets(P1.empdoj);
    cin>>P1.salary;
    
    cout<<"ID : "<<P1.empid<<endl;
    cout<<"Name : "<<puts(P1.empname)<<endl;
    cout<<"DOB : "<<puts(P1.empdob)<<endl;
    cout<<"DOJ : "<<puts(P1.empdoj)<<endl;
    cout<<"Salary : "<<P1.salary<<endl;
    
    return 0;
}
