#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
char *filename = "Binary";
int main()
{
	ofstream fout(filename);
	float height[]={145.23,188.36,165.2,48.36};
	int i;
	fout.write((char*)&height, sizeof(height));
	fout.close();
	ifstream fin(filename);
	for(i=0;i<4;i++)
	height[i]=0;
	fin.read((char*)&height,sizeof(height));
	for(i=0;i<4;i++)
	{
		cout<<setw(10)<<setprecision(2)<<height[i];
	}
	fin.close();
	return 0;
}
