#include<iostream>
using namespace std;
class time
{
	int hour;
	int minute;
	public:
		void getdata(int h, int m)
		{
			hour=h;
			minute=m;
		}
		void display()
		{
			cout<<hour<< " hr  : "<<minute<<" min "<<endl;
		}
		void sum(time,time);
};

void time :: sum(time t1, time t2)
{
	minute = t1.minute+t2.minute;
	hour   = minute/60;
	minute = minute%60;
	hour   = hour + t1.hour + t2.hour;
}

int main()
{
	time t1,t2,t3;
	int hr, min;
	cout<<"\n Enter Hour : ";cin>>hr;
	cout<<"\n Enter Minute : ";cin>>min;
	t1.getdata(hr,min);
	cout<<"\n Enter Hour : ";cin>>hr;
	cout<<"\n Enter Minute : ";cin>>min;
	t2.getdata(hr,min);
	t3.sum(t1,t2);
	cout<<"\n time T1 : ";
	t1.display();
	cout<<"\n time T2 : ";
	t2.display();
	cout<<"\n time T3 : ";
	t3.display();
	return 0;
	
}













