#include<iostream>
using namespace std;
class First
{
	protected:
		int a;
	public:
		void getNumber(int x)
		{
			a=x;
		}
		
};
class Second : public First
{
	protected :
		int b;
	public:
		void getNumber1(int y)
		{
			b=y;
		}
};
class Third : public Second
{
	int sum;
	public:
		void display()
		{
			sum=a+b;
			cout<<"\n Sum is : "<<sum;
		}
};

int main()
{
	Third t;
	int n1,n2;
	cout<<"\n Enter First Number : ";
	cin>>n1;
	cout<<"\n Enter Second Number : ";
	cin>>n2;
	t.getNumber(n1);
	t.getNumber1(n2);
	t.display();
	return 0;
}
