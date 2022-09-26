#include<iostream>
using namespace std;
int natural();
int main()
{	
	cout<<"\nresult : "<<natural();
	return 0;
}
int natural()
{
	int n,i,sum=0;
	cout<<"\n Enter End limit : ";
	cin>>n;
	cout<<"Natural Numbers : \n";
	for(i=1;i<=n;i++)
	{
		cout<<"\t"<<i;
		sum=sum+i;
	}
	return sum;
	
}
