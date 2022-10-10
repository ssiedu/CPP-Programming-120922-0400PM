#include<iostream>
using namespace std;
int main()
{
	int *pointInt;
	float *pointFloat;
	
	// dynamic memory allocate
	
	pointInt= new int;
	pointFloat=new float;
	
	*pointInt=50;
	*pointFloat=12.33;
	
	cout<<"\n value of integer pointer : "<<*pointInt;
	cout<<"\n value of Float pointer   : "<<*pointFloat;
	
	delete pointInt;
	delete pointFloat;
	
	return 0;
}
