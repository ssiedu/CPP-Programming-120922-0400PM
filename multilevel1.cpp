#include<iostream>
using namespace std;
class First
{
	protected:
		int a,b;
	public:
		void getNumber(int x, int y)
		{
			a=x;b=y;
		}
		
};
class Second : public First
{
	protected :
		int sum;
	public:
		void getsum()
		{
			sum=a+b;
		}
};
class Third : public Second
{
	public:
		void display()
		{
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
	t.getNumber(n1,n2);
	t.getsum();
	t.display();
	return 0;
}
