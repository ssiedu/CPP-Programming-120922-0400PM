#include<iostream>
using namespace std;
void natural();
int main()
{
	natural();
	return 0;
}
void natural()
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
	cout<<"\n Sum is : "<<sum;
	
}
