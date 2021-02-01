#include <iostream>
#include <string.h>
using namespace std;

void reversed(const string&a);

int main()
{
	string str;
	
	cout<<"Enter a sentence to be reversed:\n";
	getline(cin,str);
	
	cout<<"\nReversed sentences is:\n";
	
	reversed(str);
}

void reversed(const string&str)
{
	size_t n=str.size();
	
	if(n==1)
		cout<<str;
	else
	{
		cout<<str[n-1];
		
		string rev_str=str.substr(0,n-1);
		
		reversed(rev_str);
	}
}
