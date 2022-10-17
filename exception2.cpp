#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"\n Enter the value of a : ";
	cin>>a;
	cout<<"\n Enter the value of b : ";
	cin>>b;
	int c;
	try
	{
		if(b==0)
		throw b;
		else if(b>a)
		throw "Not allowed demonitor is greater than numerator ";
	
	c=a/b;
	cout<<"\n value of c : "<<c;
	}
	catch(int ex)
	{
		cout<<"\n you can not declare "<<ex<<" as a denominator ";
	}
	catch(char const *ex1)
	{
		cout<<ex1;
	}
	return 0;
}
