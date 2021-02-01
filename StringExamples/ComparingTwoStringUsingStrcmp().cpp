#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str1[100], str2[100];
	
	cout<<"Enter first string:\n";
	cin>>str1;
	
	cout<<"Enter second string:\n";
	cin>>str2;
	
	//strcmp(string, string): returns 0 if strings are equal else strings are unequal
	
	if(strcmp(str1, str2)==0)
		cout<<"\nEntered strings are equal.";
	else
		cout<<"\nEntered strings are not equal.";
}
