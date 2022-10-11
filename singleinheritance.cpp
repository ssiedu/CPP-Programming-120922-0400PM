#include<iostream>
using namespace std;
class Base
{
	protected:
	int num1,num2;
	public:
		void getNumber()
		{
			cout<<"\n Enter First Number : ";
			cin>>num1;
			cout<<"\n Enter Second Number : ";
			cin>>num2;
		}
};
class Derive : public Base
{
	int sum;
	public:
		void display()
		{
			sum=num1+num2;
			cout<<"\n sum is : "<<sum;
		}
};

int main()
{
	Derive d;
	d.getNumber();
	d.display();
	return 0;
}










