#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int j=2;
	cout<<"\n series is : \n";
	do
	{
		cout<<i<<"\t";
		cout<<j<<"\t";
		i=i+2;
		j=j+2;
	}while(j<=20);
	
	return 0;
}
