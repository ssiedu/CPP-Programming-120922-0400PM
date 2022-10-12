//Hybrid Inheritance
#include<iostream>
using namespace std;
class First
{
	protected:
	int num1,num2;
	public:
		void getNumber(int a, int b)
		{
			num1=a;
			num2=b;
		}
};
class Second : public First
{
	protected :
		int sum;
	public:
		void getSum()
		{
			sum=num1+num2;
		}
};
class Third 
{
	protected:
		int m,n ,mul;
	public:
		void indata(int p, int q)
		{
			m=p;
			n=q;
		}
		void getMul()
		{
			mul = m*n;
		}
};
class forth : public Second,public Third
{
	public:
		void display()
		{
			cout<<"\n sum of numbers : "<<sum;
			cout<<"\n Mul of numbers : "<<mul;
		}
};

int main()
{
	forth f;
	int x,y;
	cout<<"\n Enter First value : ";
	cin>>x;
	cout<<"\n Enter Second Value : ";
	cin>>y;
	f.getNumber(x,y);
	
	f.getSum();
	f.indata(x,y);
	f.getMul();
	f.display();
	return 0;
}


























