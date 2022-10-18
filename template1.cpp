#include<iostream>
using namespace std;
template <class T> T add(T &a, T &b)
{
	T result = a+b;
	return result;
}
int main()
{
	int i=10;
	int j=20;
	cout<<"\n add integer value : "<<add(i,j);
	float m=12.3;
	float n=3.3;
	cout<<"\n add float value : "<<add(m,n);
	//cout<<"\n add int float value : "<<add(i,n);
	return 0;
}
