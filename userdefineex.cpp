//user define exception
#include<iostream>
#include<exception>
using namespace std;
class MyException : public exception
{
	public:
		const char *what() const throw()
		{
			return " Attemped to divide by zero \n ";
		}
};
int main()
{
	try
	{
		int a,b;
		cout<<"\n Enter the value of a : ";
		cin>>a;
		cout<<"\n Enter the value of b : ";
		cin>>b;
		if(b==0)
		{
			MyException z;
			throw z;
		}
		else
		{
			cout<<" a/b : "<<a/b<<endl;
		}
		
	}
	catch(exception &e)
	{
		cout<<e.what();
	}
	return 0;
}
