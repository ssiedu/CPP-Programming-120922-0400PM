#include<iostream>
using namespace std;
class student
{
	private:
	int rollno;
	char name[20];
	float marks;
	public:
	void getdata()
	{
		cout<<"Enter student roll no : ";
		cin>>rollno;
		cout<<"Enter student name : ";
		cin>>name;
		cout<<"Enter student marks : ";
		cin>>marks;	
	}
	void display()
	{
		cout<<"\n student roll no : "<<rollno;
		cout<<"\n student name    : "<<name;
		cout<<"\n student marks   : "<<marks;
	}
};
int main()
{
	student stu;
	stu.getdata();
	stu.display();
	return 0;
}
