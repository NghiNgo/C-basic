#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[100];
	int length;
	
	cout<<"Enter any strings to calculates its length: \n";
	cin>>a;
	
	length = strlen(a);
	
	cout<<"Length of entered string is = "<<length<<endl;
}
