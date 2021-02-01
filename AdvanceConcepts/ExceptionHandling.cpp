#include <iostream>
using namespace std;

double division(int n1, int n2)
{
	if(n2==0)
		throw"Division by zero Exception!!!";
	return(n1/n2);
}

int main()
{
	int a=10;
	int b=5;
	float c=0;
	
	try
	{
		c=division(a,b);
		cout<<c<<endl;
	}
	catch(const char*msg)
	{
		cerr<<msg<<endl;
	}
	
	return 0;
}
