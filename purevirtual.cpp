#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void display()=0;
		
};
class Derive : public Base
{
	public:
		void display()
		{
			cout<<"\n In Derive class ";
		}
};
int main()
{
	Derive d;
	
	Base *ptr=&d;
	ptr->Base::display();
	d.display();
	return 0;
}
