//Solution 1: Without Using string function strcpy()
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char str1[100], str2[100], i;
//	
//	cout<<"Enter string to be copied: ";
//	cin>>str1;
//	
//	for(i=0;str1[i]!='\0';++i)
//		str2[i]=str1[i];
//		
//	str2[i]='\0';
//	
//	cout<<"\nString copied successfully!!\nCopied String is: "<<str2;
//}

//Solution 2: Using string function strcpy()
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str1[10], str2[10];
	
	cout<<"Enter string to be copied: ";
	cin>>str1;
	
	strcpy(str2, str1);
	
	cout<<"\nString copied successfully!!\nCopied String is: "<<str2;
}
