#include <iostream>
using namespace std;

inline int addition(int x, int y)	//Inline Function means Function call is replaced by actual code
{
	int z = x + y;
	
	return (z);
}

int main()
{
	cout<<"Addition of numbers is: "<<addition(5,15)<<endl;
	
	cout<<"Addition of numbers is: "<<addition(100,50)<<endl;
	
	system("pause");
	return 0;
}
