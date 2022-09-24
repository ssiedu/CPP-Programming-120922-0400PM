#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\n Enter any character : ";
	cin>>ch;
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"Given character is vowel";
			break;
		default:
			cout<<"\n Given character is consonant";
			break;
	}
	return 0;
}
