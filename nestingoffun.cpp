#include<iostream>
using namespace std;
class cube
{
	int n;
	public:
		void indata()
		{
			cout<<"\n Enter any number : ";
			cin>>n;
		}
		int calculate();
		void outdata();
};
void cube :: outdata()
{
	cout<<"\n cube of number :"<<calculate();
}
int cube :: calculate()
{
	return n*n*n;	
}
int main()
{
	cube c;
	c.indata();
	c.outdata();
	return 0;
}
