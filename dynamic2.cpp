#include<iostream>
using namespace std;
int main()
{
	int  num;
	float *ptr;
	cout<<"\n Enter number of students : ";
	cin>>num;
	
	ptr = new float[num];
	cout<<"\n Enter student Marks : "<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"\n Student "<< i+1<<" Marks : ";
		cin>>*(ptr+i);
	}
	cout<<" \n Students Marks Detail : "<<endl;
	
	for(int i=0;i<num;i++)
	{
		cout<<"\n Student "<<i+1<<" : "<<*(ptr+i);
	}
	
	delete[] ptr;
	return 0;
}
