#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],mul[3][3];
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
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j] += a[i][k]*b[k][j];
			}
		}
		
	}
	cout<<"\n Matrix multiplication is : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\t"<<mul[i][j];
		}
		cout<<"\n\n";
	}
	return 0;
}
