#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[10]="mango";
	char fruit[10];
	do
	{
		cout<<"\n Enter fruit name : ";
		cin>>fruit;
	}while(strcmp(fruit,str)!=0);
	cout<<"\n correct answer !";
	return 0;
}
