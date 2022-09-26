#include<iostream>
using namespace std;
int natural(int n);
int main()
{	
	int n;
	cout<<"\n Enter End limit : ";
	cin>>n;
	cout<<"\nresult : "<<natural(n);
	return 0;
}
int natural(int n)
{
	int i,sum=0;
	
	cout<<"Natural Numbers : \n";
	for(i=1;i<=n;i++)
	{
		cout<<"\t"<<i;
		sum=sum+i;
	}
	return sum;
	
}
