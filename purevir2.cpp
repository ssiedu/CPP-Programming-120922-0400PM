#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual float calculate()=0;
};
class square : public Shape
{
	float a;
	public:
		square(float x)
		{
			a=x;
		}
		float calculate()
		{
			return a*a;
		}
};
class rect : public Shape
{
	float l,b;
	public:
		rect(float m,float n)
		{
			l=m;
			b=n;
		}
		float calculate()
		{
			return l*b;
		}
};
class circle : public Shape
{
	float r;
	public:
		circle(float y)
		{
			r=y;
		}
		float calculate()
		{
			return 3.14*r*r;
		}
};

int main()
{
	Shape *sh;
	square s(2.1);
	rect r(2.1,3.3);
	circle c(2.2);
	
	sh=&s;
	float res1=s.calculate();
	cout<<"\n area of square : "<<res1;
	
	sh=&r;
	float res2 = r.calculate();
	cout<<"\n area of rectangle : "<<res2;
	
	sh=&c;
	float res3=c.calculate();
	cout<<"\n area of circle : "<<res3;
	
	return 0;
	
	
	
}












