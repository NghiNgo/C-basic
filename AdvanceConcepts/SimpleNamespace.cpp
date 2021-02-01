#include <iostream>
using namespace std;

//define a namespace

namespace namespace1
{
	int a = 21;
	float b = 4.23;
}

//define unnamed namespace

namespace
{
	float c = 4.6;
}

int main()
{
	//accessing data from named namespace
	cout<<"\nValue of a = "<<namespace1::a<<", Value of b = "<<namespace1::b;
	
	//accessing data from unnamed namespace
	cout<<"\nValue of c = "<<c;
	
	return 0;
}
