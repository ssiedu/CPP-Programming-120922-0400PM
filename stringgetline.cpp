#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[10];
	char str2[10];
	cout<<"\n Enter First String : ";
	cin.getline(str1,6);
	cout<<"\n Enter Second String : ";
	cin.getline(str2,4);
	strcat(str1,str2);
	cout<<"\n string concatinate : "<<str1;
	return 0;
}
