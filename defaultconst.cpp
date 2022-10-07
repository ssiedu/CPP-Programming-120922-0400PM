#include<iostream>
using namespace std;
class Employee
{
	public:
		int age;
		Employee()  // default constructor
		{
			age=40;
		}
};
int main()
{
	Employee e,e1;
	cout<<"\n Employee age : "<<e.age;
	cout<<"\n Employee age e1 : "<<e1.age;
	return 0;
}
