#include<iostream>
#include<iomanip>
using namespace std;
class Area
{
	float r,AOC;
	const float pi=3.14;
	public:
		void getdata();
		void calculate();
		void display();
};
void Area :: getdata()
{
	cout<<"\n Enter radius of circle : ";
	cin>>r;
}
void Area :: calculate()
{
	AOC = pi*r*r;
}
void Area :: display()
{
	cout<<"\n Area of circle : "<<setprecision(2)<<AOC;
}
int main()
{
	Area a;
	a.getdata();
	a.calculate();
	a.display();
	return 0;
}
