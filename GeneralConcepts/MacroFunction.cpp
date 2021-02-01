#include <iostream>
using namespace std;

#define max_num(a,b) ((a)>(b)?(a):(b))

int main()
{
	int a,b;
	
	cout<<"Enter any two numbers to find maximum of: ";
	cin>>a>>b;
	
	b=max_num(a,b);
	
	cout<<"\nMaximum of two number is: "<<b<<endl;
	
	return 0;
}
