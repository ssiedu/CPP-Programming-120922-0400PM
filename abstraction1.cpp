#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int base,exp,res;
	cout<<"\n Enter Base : ";
	cin>>base;
	cout<<"\n Enter Exponent : ";
	cin>>exp;
	res=pow(base,exp);
	cout<<"\n power function value : "<<res;
	return 0;
}
