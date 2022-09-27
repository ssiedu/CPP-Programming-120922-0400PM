#include<iostream>
using namespace std;
void exchange(int *a, int *b);
int main()
{
	int x,y;
	cout<<"\n Enter the value of x : ";
	cin>>x;
	cout<<"\n Enter the value of y : ";
	cin>>y;
	cout<<"Before swapping : \n";
	cout<<"\n value of x : "<<x<<"\n value of y : "<<y;
	exchange(&x,&y);//call by value
	cout<<"\n After function call : \n";
	cout<<"\n value of x : "<<x<<"\n value of y : "<<y;
	return 0;
}
void exchange(int *a, int *b)
{
	cout<<"\n In User define function :\n";
	cout<<"\n value of a : "<<*a<<"\n value of b : "<<*b;
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	cout<<"\n After Swapping :\n";
	cout<<"\n value of a : "<<*a<<"\n value of b : "<<*b;
}
