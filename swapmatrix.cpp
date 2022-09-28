#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3];
	int r,c,i,j,k;
	cout<<"\n Enter row size : ";
	cin>>r;
	cout<<"\n Enter column size : ";
	cin>>c;
	cout<<"\n Enter first matrix elements : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\n Enter second matrix Elements : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a[i][j]=a[i][j]+b[i][j];
			b[i][j]=a[i][j]-b[i][j];
			a[i][j]=a[i][j]-b[i][j];
		}
		
	}
	cout<<"\n First Matrix is : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<"\n\n";
	}
	cout<<"\n Second Matrix is : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<"\n\n";
	}
	return 0;
}
