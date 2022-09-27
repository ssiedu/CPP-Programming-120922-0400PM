#include<iostream>
using namespace std;
int main()
{
	int sum=0,n,i;
	int a[100];
	cout<<"\n Enter Array size : ";cin>>n;
	cout<<"\n Enter Array Elements : \n";
	for(i=0;i<n;i++)
	{
		cout<<" a[ "<<i<<"] : ";
		cin>>a[i];
		
	}
	cout<<"\n Array Elements : \n";
	for(int i=0;i<n;i++)
	{
		
		cout<<"\t"<<a[i];
		sum=sum+a[i];
	}
	cout<<"\n sum odf aaray elements : "<<sum;
	return 0;
}
