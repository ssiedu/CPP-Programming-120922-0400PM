#include<iostream>
using namespace std;
class largest
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"\n Enter first value : ";
			cin>>x;
			cout<<"\n Enter second value : ";
			cin>>y;
		}
		//void display();
		void max();
};
inline void largest :: max()
{
	cout<<"\n largest number : "<<((x>y)?x:y);
}
int main()
{
	largest l;
	l.getdata();
	l.max();
	return 0;
	
}



