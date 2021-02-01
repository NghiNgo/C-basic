#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	char data[100], ch;
	ofstream fout("input.txt", ios::out);
	
	cout<<"Enter lines of information: \n";
	
	for(int i=0;i<4;i++)
	{
		cin.get(data,100);
		cin.get(ch);
		fout<<data<<"\n";
	}
	
	fout.close();
	
	ifstream fin("input.txt", ios::in);
	fin.seekg(0);
	
	cout<<"\n";
	for(int i=0;i<4;i++)
	{
		fin.get(data,80);
		fin.get(ch);
		cout<<data<<"\n";
	}
	fin.close();
}
