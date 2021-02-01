#include <iostream>
using namespace std;

int main()
{
	char str1[20], str2[20];
	int i=0, j=0, flag=0;
	
	cout<<"Enter first string:\n";
	cin>>str1;
	
	cout<<"\nEnter second string:\n";
	cin>>str2;
	
	while(str1[i]!='\0')
		i++;
		
	while(str2[j]!='\0')
		j++;
		
	if(i!=j)
		flag=0;
	else
	{
		for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
			if(str1[i]==str2[j])
				flag=1;
	}
	if(flag==0)
		cout<<"\nEntered strings are not equal.\n";
	else
		cout<<"\nEntered strings are equal.\n";
}
