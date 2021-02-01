#include <iostream>
using namespace std;

int str_len(char*);

int main()
{
	char str[20];
	int len;
	
	cout<<"Enter any string to find its length: ";
	cin>>str;
	
	len=str_len(str);
	cout<<"\nThe length of the given string is "<<str<<" is: "<<len<<endl;
	
	system("pause");
}

int str_len(char*ptr) /*p=&str[0]*/
{
	int count = 0;
	
	while (*ptr!='\0')
	{
		count++;
		ptr++;
	}
	return count;
}
