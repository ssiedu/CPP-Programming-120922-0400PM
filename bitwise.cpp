#include<iostream>
using namespace std;
int main()
{
	int x=15,y=20;
	x=x^y;
	y=x^y;
	x=x^y;
	cout<<"\n value of x : "<<x;
	cout<<"\n value of y : "<<y;
	return 0;
}
