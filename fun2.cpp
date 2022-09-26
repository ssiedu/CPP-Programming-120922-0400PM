#include<iostream>
using namespace std;
void natural(int n);
int main()
{
	int num;
	cout<<"\n Enter End limit : ";
	cin>>num;
	natural(num);
	return 0;
}
void natural(int n)
{
	int i,sum=0;
	
	cout<<"Natural Numbers : \n";
	for(i=1;i<=n;i++)
	{
		cout<<"\t"<<i;
		sum=sum+i;
	}
	cout<<"\n Sum is : "<<sum;
	
}
