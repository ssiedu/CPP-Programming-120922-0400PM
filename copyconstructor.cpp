#include<iostream>
using namespace std;
class Employee
{
	public:
		int age;
		Employee(int n)//parameterized constructor
		{
			age=n;
		}
		Employee(Employee &y)//copy contructor
		{
			age=y.age;
		}
};
int main()
{
	Employee e(40);
	Employee e1=e;
	Employee e2(e);
	//Employee e3;
	//e3=e;
	cout<<"\n Employee age in parameterized contructor : "<<e.age;
	cout<<"\n Employee age in copy constructor : "<<e1.age;
	cout<<"\n Employee age in copy constructor : "<<e2.age;
	return 0;
}
