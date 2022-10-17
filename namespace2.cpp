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
	void Hello1()
	{
		cout<<"\n Inside Second namespace ";
	}
}
using namespace First;
using namespace Second;
int main()
{
	Hello();
	Hello1();
	return 0;
}
