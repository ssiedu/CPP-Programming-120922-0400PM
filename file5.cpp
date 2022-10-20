#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class Inventory
{
	int item_code;
	char name[25];
	float price;
	public:
		void readData();
		void writeData();
};
void Inventory :: readData()
{
	cout<<"\n Enter Item Code : ";
	cin>>item_code;
	cout<<"\n Enter Item Name : ";
	cin>>name;
	cout<<"\n Enter Item Price : ";
	cin>>price;
}
void Inventory ::writeData()
{
	cout<<setw(10)<<item_code<<setw(10)<<name<<setw(10)<<price<<endl;
}
int main()
{
	fstream file;
	file.open("Stock.dat",ios::in|ios::out|ios::app);
	Inventory item[3];
	int i;
	int g=file.tellg();
	int p=file.tellp();
	cout<<" \n position of get pointer : "<<g;
	cout<<" \n position of put pointer : "<<p;
	
	cout<<"\n Enter Details of Three items : \n";
	for(i=0;i<3;i++)
	{
		cout<<"Item "<<i+1<<" : ";
		item[i].readData();
		file.write((char*)&item[i],sizeof(item[i]));
		
	}
	//file.seekg(0);
	g=file.tellg();
	p=file.tellp();
	cout<<" \n position of get pointer : "<<g;
	cout<<" \n position of put pointer : "<<p;
	
	cout<<"\n Details of Item : \n";
	for(i=0;i<3;i++)
	{
		file.read((char*)&item[i],sizeof(item[i]));
		item[i].writeData();
	}
	
	file.close();
	return 0;
	
}






