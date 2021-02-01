//Solution 1: Without using string function strupr()
//#include <iostream>
//using namespace std;
//
//void upper_case(char []);
//
//int main()
//{
//	char str[100];
//	
//	cout<<"Enter a string to convert it into upper case: ";
//	cin>>str;
//	
//	upper_case(str);
//	
//	cout<<"\nEntered string in upper case is:\n"<<str;
//}
//
//void upper_case(char str[])
//{
//	int i=0;
//	
//	while (str[i]!='\0')
//	{
//		if(str[i]>='a'&&str[i]<='z')
//			str[i]=str[i]-32;
//		i++;
//	}
//}

//Solution 2: using namespace function strupr()
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[100];
	
	cout<<"Enter a string to convert it into upper case: ";
	cin>>str;
	
	//strupr() will print string in upper case
	
	cout<<"\nEntered string in upper case is:\n"<<strupr(str)<<endl;
}
