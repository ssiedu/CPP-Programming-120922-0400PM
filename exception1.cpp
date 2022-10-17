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
	
	c=a/b;
	cout<<"\n value of c : "<<c;
}
	catch(int ex)
	{
		cout<<"\n you can not declare "<<ex<<" as a denominator ";
	}
	return 0;
}
