#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[1000], ch;
	int i, count=0;
	
	cout<<"Enter a string:\n";
	cin.getline(str, 1000);
	
	cout<<"\nEnter a character to find its frequency: ";
	cin>>ch;
	
	for(i=0;str[i]!='\0';++i)
		if(ch==str[i])
			++count;
			
	cout<<"\nFrequency of word "<<ch<<" = "<<count;
}
