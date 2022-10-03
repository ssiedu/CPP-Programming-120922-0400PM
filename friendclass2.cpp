#include<iostream>
using namespace std;
class  ABC;
class XYZ
{
	int v1;
	public:
		void getdata()
		{
			cout<<"\n Enter the value of variable1 : ";
			cin>>v1;
		}
		void display()
		{
			cout<<"\n value of v1 : "<<v1;
		}
		friend void exchange(XYZ &,ABC &);
};

class ABC 
{
	int v2;
	public:
		void getdata()
		{
			cout<<"\n Enter the value of variable2 : ";
			cin>>v2;
		}
		void display()
		{
			cout<<"\n value of v2 : "<<v2;
		}
		friend void exchange(XYZ &,ABC &);
};
void exchange(XYZ &x,ABC &y)
{
	int temp=x.v1;
	x.v1=y.v2;
	y.v2=temp;
}
int main()
{
	XYZ xyz;
	ABC abc;
	xyz.getdata();
	abc.getdata();
	cout<<"\n Before swapping : \n";
	xyz.display();
	abc.display();
	exchange(xyz,abc);
	cout<<"\n After Swapping : \n ";
	xyz.display();
	abc.display();
	return 0;	
}
















