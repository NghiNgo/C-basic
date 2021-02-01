//Solution 1: Without using string finction strlwr()
//#include <iostream>
//using namespace std;
//
//void lower_case(char[]);
//
//int main()
//{
//	char str[100];
//	
//	cout<<"Enter a string to convert is into lower case: ";
//	cin>>str;
//	
//	lower_case(str);
//	
//	cout<<"\nEntered string in lower case is:\n"<<str;
//}
//
//void lower_case(char str[])
//{
//	int i=0;
//	
//	while(str[i]!='\0')
//	{
//		if(str[i]>='A'&&str[i]<='Z')
//			str[i]=str[i]+32;
//		i++;
//	}
//}

//Solution 2: using namespace function strlwr()
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[50];
	
	cout<<"Enter a string to convert it into lower case: ";
	cin>>str;
	
	cout<<"Entered string in lower case is:\n"<<strlwr(str)<<endl;
}
