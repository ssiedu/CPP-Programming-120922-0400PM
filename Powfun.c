//WAP to find x to the power of y(x^y) using function.
#include<stdio.h>
int pow1(int,int); //Function declaration---1
int main()
{
	int a,b,result;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
    result=pow1(a,b);  //Function calling----2
	printf("power of %d to the %d is=%d",a,b,result);
	return 0;
}
//Function definition---3
int pow1(int x,int y)
{
	int i,prod;
	prod=1;
	i=1;
	while(i<=y)
	{
		prod=prod*x;
		i++;
	}
	return prod;
}

//WAP to calculate the area circle.
//WAP to calculate the area rectanle.
//Circumference of Circle
//volume of cone
//volume of cylinder
//Simple interest
//Factorial
//Fibonicci Series-> 0 1 1 2 3 5 8 13 21.......
