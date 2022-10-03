#include<iostream>
using namespace std;
class number 
{
	int num1,num2,sum;
	public :
		void getdata();
		void display() const
		{
			cout<<"\n First Number : "<<num1;
			cout<<"\n Second Number : "<<num2;
			
			cout<<"\n sum is : "<<sum;
		}
};

void number :: getdata()
{
	cout<<"\n Enter First Number : ";
	cin>>num1;
	cout<<"\n Enter Second Number : ";
	cin>>num2;
	sum=num1+num2;
}
int main()
{
	number n;
	n.getdata();
	n.display();
	return 0;
}



