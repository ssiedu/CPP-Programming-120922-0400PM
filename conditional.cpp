#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"\n Enter the value of a : ";
	cin>>a;
	cout<<"\n Enter the value of b : ";
	cin>>b;
	(a==b)? cout<<"\n Numbers are equal" :
		(a>b)?cout<<"\n a :"<<a : cout<<"\n b : "<<b;
	return 0;
}
