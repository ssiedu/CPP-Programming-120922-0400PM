#include<iostream>
using namespace std;
inline void square(int n)
{
	cout<<"\n square of a number is : "<<n*n;
}
int main()
{
	int num;
	cout<<"\n Enter Number : ";
	cin>>num;
	square(num);//cout<<"\n square of a number is : "<<n*n;
	square(5);//cout<<"\n square of a number is : "<<n*n;
	square(4);//cout<<"\n square of a number is : "<<n*n;
	return 0;
}
