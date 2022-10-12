//Hirarchical Inheritance
#include<iostream>
using namespace std;
class Base
{
	protected:
		int num1,num2;
	public:
		void getNum(int a, int b)
		{
			num1=a;
			num2=b;
		}
};
class First : public Base
{
	int sum;
	public:
		void getsum()
		{
			sum=num1+num2;
			cout<<"\n Sum is : "<<sum;
		}
};

class Second : public Base
{
	int mul;
	public:
		void getMul()
		{
			mul=num1*num2;
			cout<<"\n Multiplication is : "<<mul;
		}
};

class Third : public Base
{
	int sub;
	public:
		void getSub()
		{
			sub=num1-num2;
			cout<<"\n subtraction is : "<<sub;
		}
};
int main()
{
	First f;
	Second s;
	Third t;
	int x,y;
	cout<<"\n Enter First Value : ";
	cin>>x;
	cout<<"\n Enter Second value : ";
	cin>>y;
	f.getNum(x,y);
	f.getsum();
	s.getNum(x,y);
	s.getMul();
	t.getNum(x,y);
	t.getSub();
	return 0;
}






























