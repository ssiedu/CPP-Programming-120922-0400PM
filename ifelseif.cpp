#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"\n Enter the value of a : ";
	cin>>a;
	cout<<"\n Enter the value of b : ";
	cin>>b;
	if(a==b)
		cout<<"\n a is equal to b ";
	else if(a>b)
		cout<<"\n a is greater than b";
	else
		cout<<"\n b is greater than a";
	return 0;
}
