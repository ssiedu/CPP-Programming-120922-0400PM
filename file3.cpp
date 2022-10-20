//via mode
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char string[25];
	int len,i;
	fstream file;
	file.open("Text.txt",ios::in|ios::out|ios::app);
	cout<<"\n Enter Any String : ";
	cin>>string;
	len=strlen(string);
	for(i=0;i<=len;i++)
	file.put(string[i]);
	file.seekg(0);
	char ch;
	while(file)
	{
		file.get(ch);
		cout<<ch;
	}
	file.close();
	return 0;
}
