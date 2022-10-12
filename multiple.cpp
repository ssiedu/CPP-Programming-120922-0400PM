//Multiple Inheritance
#include<iostream>
using namespace std;
class First
{
	protected:
	int num1;
	public:
		void getNum1(int a)
		{
			num1=a;
		}
};
class Second 
{
	protected:
	int num2;
	public:
		void getNum2(int b)
		{
			num2=b;
		}
};
class Third 
{
	protected:
	int num3;
	public:
		void getNum3(int c)
		{
			num3=c;
		}
};
class derive : public First,public Second,public Third
{
	
	public:
		void display()
		{
			cout<<"\n First Number : "<<num1;
			cout<<"\n Second Number : "<<num2;
			cout<<"\n Third Number  : "<<num3;
			cout<<"\n product of three numbers : "<<num1*num2*num3;
		}
};
int main()
{
	derive d;
	int m,n,o;
	cout<<"\n Enter First Number : ";
	cin>>m;
	cout<<"\n Enter Second Number : ";
	cin>>n;
	cout<<"\n Enter Third Number : ";
	cin>>o;
	d.getNum1(m);
	d.getNum2(n);
	d.getNum3(o);
	d.display();
	return 0;
}




























