#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
	void getdata()
	{
		printf("\n Enter student roll no : ");
		scanf("%d",&rollno);
		printf("\n Enter student name : ");
		scanf("%s",&name);
		printf("\n Enter student marks : ");
		scanf("%f",&marks);
	}
	void display()
	{
		printf("\n student roll no : %d",rollno);
		printf("\n student Name    : %s",name);
		printf("\n student marks   : %.2f",marks);
	}
};
int main()
{
	struct student stu;
	stu.getdata();
	stu.display();
	return 0;
}
