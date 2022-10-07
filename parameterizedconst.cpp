#include<iostream>
using namespace std;
class Employee
{
	public:
		int age;
		Employee(int n)
		{
			age=n;
		}
};
int main()
{
	Employee e=40;
	Employee e1=50;
	cout<<"\n Employee age : "<<e.age;
	cout<<"\n Employee age : "<<e1.age;
	return 0;
}
