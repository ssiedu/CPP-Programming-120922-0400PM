//WAP to find addition of two numbers using function.
#include<stdio.h>
int sum(int,int); //Function declaration---1
int main()
{
	int a,b,result;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
    result=sum(a,b);  //Function calling----2
	printf("Sum of %d & %d is=%d",a,b,result);
	return 0;
}
//Function definition---3
int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
