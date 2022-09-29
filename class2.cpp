#include<iostream>
using namespace std;
class product
{
	private:
	int a,b,p;
	public:
		void input()
		{
			cout<<"\n Enter first number : ";
			cin>>a;
			cout<<"\n Enter Second Number : ";
			cin>>b;
		}
		void calculate()
		{
			p=a*b;
		}
		void display()
		{
			cout<<"\n product of two numbers : "<<p;
		}
		
};

int main()
{
	product p1,p2;
	p1.input();
	p1.calculate();
	p1.display();
	p2.input();
	p2.calculate();
	p2.display();
	return 0;
}
