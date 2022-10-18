#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[10]="Hello";
	char str2[10]="World";
	int len;
	char str3[10];
	
	len=strlen(str1);
	cout<<"\n length of string str1 : "<<len;
	
	strcat(str1,str2);
	cout<<"\n string concatination : "<<str1;
	
	strcpy(str3,str1);
	cout<<"\n string copy : "<<str3;
	
	if(strcmp(str1,str2)==0)
	cout<<"\n string are equal";
	else
	cout<<"\n Strings are not equal";
	
	strstr(str1,str2);
	cout<<"\n Occaurance of string : "<<str1;
	
	return 0;
}
