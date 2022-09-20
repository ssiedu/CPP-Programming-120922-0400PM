#include<iostream>
using namespace std;
int main()
{
	int x=10,y=5;
	x += y;//x=x+y//15
	cout<<"\n value of x : "<<x;//15//10//50//10
	cout<<"\n value of y : "<<y;//5//5//5//5
	x -= y;//x=x-y//
	cout<<"\n value of x : "<<x;//15//10//50//10
	cout<<"\n value of y : "<<y;//5//5//5//5
	x *= y;//x=x*y
	cout<<"\n value of x : "<<x;//15//10//50//10
	cout<<"\n value of y : "<<y;//5//5//5//5
	x /= y;
	cout<<"\n value of x : "<<x;//15//10//50//10
	cout<<"\n value of y : "<<y;//5//5//5//5
	return 0;
}
