#include<iostream>
using namespace std;
class Base
{
	public:
		void display()
		{
			cout<<"\n Welcome to ssi ";
		}
};
class Base1
{
	public:
		void display()
		{
			cout<<"\n Second Base class";
		}
};
class derive :public Base , public Base1
{
	public:
		void view()
		{
		   Base::display();
		   Base1::display();	
		}
};
int main()
{
	derive d;
	d.view();
	return 0;
}


