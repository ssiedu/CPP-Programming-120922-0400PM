#include<iostream>
#define MAX_SIZE 100
using namespace std;
class Person
{
	int id;
	char name[30];
	float salary;
	public:
		void getdata();
		void putdata();
};
void Person :: getdata()
{
	cout<<"\n Enter Id : ";
	cin>>id;
	cout<<"\n Enter Name of person : ";
	cin>>name;
	cout<<"\n Enter Salary : ";
	cin>>salary;
}
void Person :: putdata()
{
	cout<<"\n Person Id : "<<id;
	cout<<"\n Person Name : "<<name;
	cout<<"\n Person Salary : "<<salary;
}

int main()
{
	Person p[MAX_SIZE];
	int n;
	cout<<"\n Enter Number of persons : ";
	cin>>n;
	cout<<"\n Enter Person Details : \n";
	for(int i=1;i<=n;i++)
	{
		cout<<"\n Person  "<<i << " : "<<endl;
		p[i].getdata();
	}
	for(int i=1;i<=n;i++)
	{
		cout<<"\n Details of Person "<<i<<" : "<<endl;
		p[i].putdata();
	}
	return 0;
}








