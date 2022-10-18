#include<iostream>
using namespace std;
template <class T>
class A
{
	public:
		T num1=6;
		T num2=8;
		void add()
		{
			cout<<"\n the value of addition : "<<num1+num2;
		}
};
int main()
{
	A <int>d;
	d.add();
	return 0;
}
