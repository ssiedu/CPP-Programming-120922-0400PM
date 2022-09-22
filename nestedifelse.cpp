#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	if(num==0)
		cout<<"number is zero";
	else if(num>0)
	{
		cout<<"\n number is positive";
		if(num%2==0)
			cout<<"\n number is even";
		else
			cout<<"\n number is odd";
	}
		
	else
	{
		cout<<"\n number is negative";
		if(num%2==0)
			cout<<"\n number is even";
		else
			cout<<"\n number is odd";
	}
	return 0;
}
