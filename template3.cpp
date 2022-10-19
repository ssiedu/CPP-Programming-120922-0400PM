#include<iostream>
using namespace std;
template <class T, class U , class V=char>
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
	ABC<int,double> obj1(10,12.34,'A');
	cout<<"\n Object 1 value : "<<endl;
	obj1.display();
	ABC<float,int>obj2(34.5,50,'P');
	cout<<"\n Object 2 value : "<<endl;
	obj2.display();
	return 0;
}
