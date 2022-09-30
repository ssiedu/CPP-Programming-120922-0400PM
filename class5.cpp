#include<iostream>
using namespace std;
class person
{
	int id;
	char name[10];
	public:
		void getinfo()
		{
			cout<<"\n Enter id : ";
			cin>>id;
			cout<<"\n Enter name : ";
			cin>>name;
		}
		void print()
		{
			cout<<"\n Person Id : "<<id;
			cout<<"\n Person Name : "<<name;
		}
		
}p2;

int main()
{
  person p1;
  p1.getinfo();
  p1.print();
  p2.getinfo();
  p2.print();
  return 0;	
}
