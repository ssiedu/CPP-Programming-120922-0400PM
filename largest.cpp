#include<iostream>
using namespace std;
class largest
{
	int a,b,c;
	public:
		void getdata();
		int max();
		void display();
};
void largest :: getdata()
{
	cout<<"\n Enter the value of a : ";cin>>a;
	cout<<"\n Enter the value of b : ";cin>>b;
	cout<<"\n Enter the value of c : ";cin>>c;
}
void largest :: display()
{
	cout<<"\n value of a : "<<a;
	cout<<"\n value of b : "<<b;
	cout<<"\n value of c : "<<c;
	cout<<"\n largest value : "<<max();
}
int largest :: max()
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;
}

int main()
{
	largest l;
	l.getdata();
	l.display();
	cout<<"\n maximum value : "<<l.max();
	return 0;
}





























