#include<iostream>
using namespace std;
class Square
{
	int n;
	public:
		void getdata(int num)
		{
			n = num;
		}
		void result()
		{
			cout<<"Square of a number : "<<n*n;
		}
		
};
int main()
{
	Square s;
	int n1;
	cout<<"\n Enter any number : ";
	cin>>n1;
	s.getdata(n1);
	s.result();
	return 0;
}
