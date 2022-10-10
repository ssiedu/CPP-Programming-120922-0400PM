#include<iostream>
using namespace std;
class student
{
	int rollno;
	string name;
	float marks;
	public:
		student()
		{
			rollno=101;
			name="Ram";
			marks = 76.88;
		}
		void display()
		{
			cout<<"\n student roll no is : "<<rollno;
			cout<<"\n student name : "<<name;
			cout<<"\n student marks : "<<marks;
		}
};
int main()
{
	student *ptr = new student();
	ptr->display();
	delete ptr;
	return 0;
}
