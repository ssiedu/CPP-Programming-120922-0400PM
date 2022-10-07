#include<iostream>
using namespace std;
int count=0;
class Employee
{
	public:
		//int count;
		Employee()//constructor
		{
			count++;
			cout<<"\n Number of object created : "<<count;
		}
		~Employee()//destructor
		{
			count--;
			cout<<"\n number of object destroyed : "<<count;
		}
};
int main()
{
	cout<<"\n Enter in main function : \n";
	Employee e1,e2,e3,e4;
	{
		cout<<"\n In block One : \n";
		Employee e5;
	}
	{
		cout<<"\n In block Two : \n";
		Employee e6;
	}
	cout<<"\n Re-Enter in main  : \n";
}
