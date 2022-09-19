#include<iostream>
using namespace std;
int main()
{
	int a=54,b=11;
	cout<<"\n (a>b && a>=b) : "<<(a>b && a>=b);//1
	cout<<"\n (b<a || a>=b) : "<<(b<a || a>=b);//1
	cout<<"\n (b>=23 && a>=54) : "<<(b>=23 && a>=54);//0
	cout<<"\n (a<=54 || b<=11) : "<<(a<=54 || b<=11);//1
	cout<<"\n (a!=b)  : "<<!(a!=b);//0
	cout<<"\n (a==b)   : "<<!(a==b);//1
	return 0;
	
}
