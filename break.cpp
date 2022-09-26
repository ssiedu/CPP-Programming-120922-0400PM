#include<iostream>
using namespace std;
int main()
{
	
	cout<<"Break statement :\n";
	for(int i=2;i<=19;i++)
	{
		if(i<2 || i>=9)
		{
			break;
		}	
		cout<<"Welcome to ssi "<<i<<endl;
	}
	cout<<" Continue statement : \n";
	for(int i=3;i<=30;i+=3)
	{
		if(i>=9 && i<=15)
		{
			goto XYZ;
			continue;
			
		}
		
		cout<<"Inside Continue "<<i<<endl;
	}
	
	XYZ :
		cout<<"Hello Goto "<<endl;
	return 0;
	
}
