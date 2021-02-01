#include <iostream>
#include <ctime>
using namespace std;

char str[] = {'z','b','d','d','e','f'};

char& setValues(char i)
{
	return str[i];	//return a reference
}

int main()
{
	cout<<"Before making changes: "<<endl;
	
	for(int i=0;i<6;i++)
	{
		cout<<"str["<<i<<"] = ";
		cout<<str[i]<<endl;
	}
	
	setValues(0) = 'a';	//change 2nd element
	setValues(2) = 'c';	//change 4th element
	
	cout<<"After making changing: "<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<"str["<<i<<"] = ";
		cout<<str[i]<<endl;
	}
	
	system("pause");
}
