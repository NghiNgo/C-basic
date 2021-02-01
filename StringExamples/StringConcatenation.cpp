//Solution 1: Without using string function
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char str1[100], str2[100];
//	int i, j;
//	
//	cout<<"Enter the first string to be concatenated:\n";
//	cin>>str1;
//	
//	cout<<"Enter the second string to be concatenated:\n";
//	cin>>str2;
//	
//	for(i=0;str1[i]!='\0';++i);	//i contains length of string s1
//	for(j=0;str2[j]!='\0';++j,++i)
//		str1[i]=str2[j];
//	str1[i]='\0';
//	
//	cout<<"\nConcatenated String is: "<<str1;
//}

//Solution 2: Using string function
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str1[100], str2[100];
	
	cout<<"Enter the first string to be concatenated:\n";
	cin>>str1;
	
	cout<<"Enter the second string to be concatenated:\n";
	cin>>str2;
	
	//strcat will apped string b on string a
	strcat(str1, str2);
	
	cout<<"\nConcatenated String is: "<<str1;
}
