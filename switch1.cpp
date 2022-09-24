#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cout<<"\n Enter the value of a : ";
	cin>>a;
	cout<<"\n Enter the value of b : ";
	cin>>b;
	cout<<"Enter your choice like (+,-,*,/) :";
	cin>>ch;
	switch(ch)
	{
		case '+':
			cout<<"\n Addition of two numbers :"<<a+b;
			break;
		case '-' :
			cout<<"\n Subtraction is : "<<a-b;
			break;
		case '*' :
			cout<<"\n Multiplication is : "<<a*b;
			break;
		case '/' :
			cout<<"\n division is : "<<setprecision(2)<<(float)a/b;
			break;
		default :
			cout<<"\n Please enter valid choice";
			break;
	}
	return 0;
}
