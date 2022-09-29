#include<iostream>
using namespace std;
class Addition
{
	int num1,num2;
	public:
		void getdata()
		{
			cout<<"\n Enter first number : ";
			cin>>num1;
			cout<<"\n enter second number : ";
			cin>>num2;
		}
		void sum()
		{
			cout<<"\n sum is : "<<num1+num2;
			//return num1+num2;
		}
		void mul()
		{
			cout<<"\n mul is : "<<num1*num2;
		}
		/*void display()
		{
			cout<<"Sum is : "<<sum();
			
			cout<<"\n mul is : "<<mul();
		}*/
		
};
int main()
{
	Addition a;
	a.getdata();
	a.sum();
	a.getdata();
	a.mul();
	//.display();
	//a.mul();
	//int res=a.sum();
	//cout<<"\n sum is : "<<res;
	return 0;
}
