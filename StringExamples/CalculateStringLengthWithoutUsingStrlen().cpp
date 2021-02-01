#include <iostream>
using namespace std;

int main()
{
	int i, count=0;
	char ch[20];
	
	cout<<"Enter any strings to calculates its length:\n";
	cin>>ch;
	
	for(i=0;ch[i]!='\0';i++)
		count++;
		
	cout<<"Length of entered string is = "<<count<<"\n";
}
