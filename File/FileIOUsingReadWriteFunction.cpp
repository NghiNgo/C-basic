//file accessing using read & write function
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout("Example.txt");
	cin.sync();
	cout<<"Enter some text: ";
	char str[100];
	cin.getline(str,100);
	fout.write((char*)&str, sizeof(str));
	fout.close();
	
	ifstream fin("Example.txt");
	
	cout<<"Data read from file: \n";
	fin.read((char*)&str, sizeof(str));
	cout<<str<<endl;
	fin.close();
	
	system("pause");
}
