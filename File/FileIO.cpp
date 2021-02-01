#include <iostream>
#include <fstream>
using namespace std;
const char*FILE_NAME = "E:\\CodeC++\\Example.txt";

int main()
{
	ofstream fout(FILE_NAME);
	
	cout<<"Enter some text: ";
	char str[100];
	cin.sync();
	cin.getline(str, 100);	
	
	//write the text to the file
	fout<<str<<endl;
	
	//close file
	fout.close();
	
	ifstream fin(FILE_NAME);
	char ch;
	
	cout<<"Data read from file: \n";
	while (fin.get(ch))
		cout<<ch;
	
	fin.close();
	system("pause");
}
