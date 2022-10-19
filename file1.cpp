#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int item_no;
	char name[10];
	float price;
	
	ofstream fout("ITEM");//create a file
	//writting data into file
	cout<<"\n Enter Item Number : ";
	cin>>item_no;
	fout<<item_no<<endl;
	cout<<"\n Enter Item Name : ";
	cin>>name;
	fout<<name<<endl;
	cout<<"\n Enter Item Price : ";
	cin>>price;
	fout<<price<<endl;
	fout.close();
	ifstream fin("ITEM");//Read
	fin>>item_no;
	fin>>name;
	fin>>price;
	cout<<"\n Item Number : "<<item_no;
	cout<<"\n Item Name   : "<<name;
	cout<<"\n Item Price  : "<<price;
	fin.close();
	return 0;
}
