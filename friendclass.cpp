#include<iostream>
using namespace std;
class ABC ; // forward declaration class
class XYZ
{
	int x;
	public :
		void getdata()
		{
			cout<<"\n Enter the value of x : ";
			cin>>x;
		}
		friend void max(XYZ,ABC);
};
class ABC
{
	int y;
	public:
		void getdata()
		{
			cout<<"\n Enter the value of y : ";
			cin>>y;
		}
		friend void max(XYZ,ABC);
};
void max(XYZ m,ABC n)
{
	if(m.x>n.y)
		cout<<"\n greater number is : "<<m.x;
	else
		cout<<"\n greater number is : "<<n.y;
}
int main()
{
	XYZ xyz;
	xyz.getdata();
	ABC abc;
	abc.getdata();
	
	max(xyz,abc);
	return 0;
}








