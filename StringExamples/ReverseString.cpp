//Solution 1: Without using string function strrev()
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int main()
//{
//	char str[100], temp;
//	int i, j=0;
//	cout<<"Enter any the string to be reversed: ";
//	cin>>str;
//	
//	i=0;
//	j=strlen(str)-1;
//	
//	while(i<j)
//	{
//		temp=str[i];
//		str[i]=str[j];
//		str[j]=temp;
//		i++;
//		j--;
//	}
//	
//	cout<<"Reverse string is: "<<str;
//}

//Solution 2: Using string function strrev()
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char arr[100];
	
	cout<<"Enter any string to be reversed: ";
	cin>>arr;
	
	strrev(arr);
	
	cout<<"Reversed string is: "<<arr<<endl;
}
