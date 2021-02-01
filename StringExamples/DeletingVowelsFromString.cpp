#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[20];
	int str_len;
	
	cout<<"Enter any string:\n";
	cin>>str;
	
	str_len=strlen(str);
	
	for(int i=0;i<str_len;i++)
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			for(int j=i;j<str_len;j++)
				str[j]=str[j+1];
			str_len--;
		}
	
	cout<<"After removing vowels, the string is:\n"<<str;
}
