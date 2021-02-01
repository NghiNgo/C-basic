#include <iostream>
using namespace std;

void stat_func()
{
	static int count = 0;
	count++;
	
	cout<<"\nEntered into the Function "<<count<<" times."<<endl;
}

int main()
{
	cout<<"\nFunction Called.\n";
	
	stat_func();
	stat_func();
	stat_func();
	
	system("pause");
	return 0;
}
