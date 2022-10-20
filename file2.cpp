#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("C Programming");
	fout<<"Function"<<endl;
	fout<<"Array"<<endl;
	fout<<"Structure"<<endl;
	fout<<"File handling"<<endl;
	fout.close();
	fout.open("C++ Programming");
	fout<<"Class and Object"<<endl;
	fout<<"Abstraction"<<endl;
	fout<<"Encapsulation"<<endl;
	fout<<"Inheritance"<<endl;
	fout<<"Polymorphism"<<endl;
	fout.close();
	ifstream fin;
	fin.open("C Programming");
	char ch[50];
	cout<<"\n Content of C programming File : "<<endl;
	while(fin)
	{
		fin.getline(ch,20);
		cout<<ch<<endl;
	}
	fin.close();
	fin.open("C++ Programming");
	cout<<"\n Content of C++ Programming File : "<<endl;
	while(fin)
	{
		fin.getline(ch,30);
		cout<<ch<<endl;
	}
	fin.close();
	return 0;
}
