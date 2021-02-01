#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Student
{
	int roll;
	char name[30];
	
	public:
		void getDetails()
		{
			cout<<"Enter Student Details"<<endl;
			cout<<"Roll No: ";
			cin>>roll;
			cin.sync();
			cout<<"Name: ";
			cin.getline(name, 30);
		}
		void showDetails()
		{
			cout<<endl<<"Student Details"<<endl;
			cout<<"Roll No: "<<roll<<endl;
			cout<<"Name: "<<name<<endl;
		}
};

int main()
{
	Student s1;
	Student s2;
	
	s1.getDetails();	//taking details from user
	
	//Writing s1 object to Example.txt file
	
	ofstream fout("Example.txt");	//open file for writing
	fout.write((char*)&s1, sizeof(s1));	//write s1 object to file
	fout.close();	//close the file
	
	cout<<"\nData is saved in file, press any key to retrieved it\n\n";
	system("pause");
	
	//Reading saved object from Example.txt file and stored it in s2 object
	
	ifstream fin("Example.txt");	//open file for reading
	fin.read((char*)&s2, sizeof(s2));	//save accessed data in s2 object
	fin.close();	//close the file
	
	cout<<"\nData read from file: \n";
	
	s2.showDetails();	//display data
	
	system("pause");
}
