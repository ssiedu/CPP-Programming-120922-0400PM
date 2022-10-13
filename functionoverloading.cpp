#include<iostream>
using namespace std;
int sum(int a, int b)
{
	return a+b;
}
int sum(int a, int b , int c)
{
	return a+b+c;//number of argument
}
float sum(float a, float b)
{
	return a+b;
}
float sum(int a, float b)
{
	return a+b;
}
int main()
{
	cout<<"\n 1st sum function with 2 parameter : "<<sum(10,20);
	cout<<"\n 2nd sum function with 3 parameter : "<<sum(1,2,3);
	cout<<"\n 3rd sum function with float parameter : "<<sum(1.2f,4.5f);
	cout<<"\n 4th sum function with different parameter : "<<sum(10,12.5f);
}
