#include<iostream>
using namespace std;
namespace First
{
	void Hello()
	{
		cout<<"\n Inside First Namespace ";
	}
}
namespace Second 
{
	void Hello()
	{
		cout<<"\n Inside Second namespace ";
	}
}
int main()
{
	First :: Hello();
	Second :: Hello();
	return 0;
}
