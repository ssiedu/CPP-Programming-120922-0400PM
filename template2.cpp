#include<iostream>
using namespace std;
template <class T, class U , class V>
class ABC
{
	T var1;
	U var2;
	V var3;
	public:
		ABC(T v1, U v2, V v3)
		{
			var1=v1;
			var2=v2;
			var3=v3;
		}
		void display()
		{
			cout<<"\n var 1 : "<<var1;
			cout<<"\n var 2 : "<<var2;
			cout<<"\n var 3 : "<<var3;
		}
};
int main()
{
	ABC<int,double,char> obj1(10,12.34,'A');
	cout<<"\n Object 1 value : "<<endl;
	obj1.display();
	ABC<float,char,int>obj2(34.5,'Z',50);
	cout<<"\n Object 2 value : "<<endl;
	obj2.display();
	return 0;
}
