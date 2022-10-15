#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
	public:
		void getdata()
		{
			cout<<"\n Enter First value ; ";cin>>x;
			cout<<"\n Enter Second value : ";cin>>y;
		}
		void display()
		{
			cout<<"\n product of two numbers : "<<x*y;
		}
};
int main()
{
	A a;
	
	a.getdata();
	
	a.display();
	return 0;
}

