#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str1="Hello";
	string str2="World";
	int len;
	
	len= str1.size();
	cout<<"\n length of string : "<<len;
	
	string str3;
	
	str3 = str1 + str2;
	cout<<"\n string concatinate : "<<str3;
	
	string str4=str1;
	cout<<"\n string copy : "<<str4;
	
	
	
	return 0;
}
