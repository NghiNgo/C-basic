#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	char data[100];
	
	//open a file in write mode.
	ofstream outfile;
	outfile.open("Example.txt");
	
	cout<<"File is in Write mode"<<endl;
	cout<<"Please enter your name: ";
	cin.getline(data,100);
	
	//write inputted data into the file.
	outfile<<data<<endl;
	
	cout<<"Please enter your age: ";
	cin>>data;
	//input is ignored
	cin.ignore();
	
	//again write inputted data into the file.
	outfile<<data<<endl;
	
	cout<<"Please enter your Education: ";
	cin.getline(data, 100);
	outfile<<data<<endl;
	
	//close the opened file.
	outfile.close();
	
	//open a file in read mode.
	ifstream infile;
	infile.open("Example.txt");
	
	cout<<"File is in Read mode"<<endl;
	infile>>data;
	
	//write the data at the screeen.
	cout<<data<<endl;
	
	//again read the data from the file and display it.
	infile>>data;
	cout<<data<<endl;
	
	infile>>data;
	cout<<data<<endl;
	
	//close the opened file.
	infile.close();
	
	system("pause");
}
