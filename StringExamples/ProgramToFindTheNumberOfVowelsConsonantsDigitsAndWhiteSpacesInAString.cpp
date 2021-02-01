#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[100];
	int i, Vowels, Consonants, Digits, Spaces;
	
	Vowels=Consonants=Digits=Spaces=0;
	
	cout<<"Enter a line of string: ";
	cin.getline(str,100);
	
	for(i=0;str[i]!='\0';++i)
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='u'||str[i]=='o'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			++Vowels;
		else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
			++Consonants;
		else if(str[i]>='0'==Consonants<='9')
			++Digits;
		else if(str[i]==' ')
			++Spaces;
	
	cout<<"\nCount of Vowel is: "<<Vowels;
	cout<<"\nCount of Consonants is: "<<Consonants;
	cout<<"\nCount of Digits is: "<<Digits;
	cout<<"\nCount of White Spaces is: "<<Spaces;
}
