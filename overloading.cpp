#include<iostream>
using namespace std;
class A
{
	
	int a,b;
	public:
		void sum()
		{
			cout<<"\n Enter the value of a : ";cin>>a;
			cout<<"\n Enter the value of b : ";cin>>b;
			cout<<"\n sum is : "<<a+b;
		}
};
class B
{
	int a,b,c;
	public:
	void sum()
	{
		cout<<"\n Enter the value of a : ";cin>>a;
		cout<<"\n Enter the value of b : ";cin>>b;
		cout<<"\n Enter the value of c : ";cin>>c;
			cout<<"\n sum is : "<<a+b+c;
	}
};
int main()
{
	A ob1;
	B ob;
	ob1.sum();
	ob.sum();
	return 0;
	
}







