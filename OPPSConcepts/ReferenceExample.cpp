#include <iostream>
using namespace std;

int main()
{
	//Variable Declaration
	int x;
	double y;
	
	//Reference variable Declaration
	int&a = x;
	double&b = y;
	
	x = 100;
	cout<<"Value of x: "<<x<<endl;
	cout<<"Stored value in x reference: "<<a<<endl;//printing Reference value
	
	y = 89.99;
	cout<<"Value of y: "<<y<<endl;
	cout<<"Stored value in y reference: "<<b<<endl;//printing Reference value
	
	system("pause"); 
}
