#include<iostream>
using namespace std;
int naturalnum(int n);
int main()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	cout<<"\n sum of natural number is : "<<naturalnum(num);
	return 0;
}
int naturalnum(int n)
{
	if(n==0)
		return 0;
	else
		return n+naturalnum(n-1);
}
