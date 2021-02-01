#include <iostream>
using namespace std;

int count = 10;	//Definition of variable count

	//declare variable

int main()
{
	cout<<"Initial count is: "<<count<<endl;
	PrintCount();
	
	system("pause");
	return 0;
}

void PrintCount()
{
	while(count!=0)
	{
		cout<<"\nCount is: "<<count;
		--count;
	}
}
