#include <iostream>
using namespace std;

int main()
{
	int *ptr;
	int x=10;
	
	cout<<"Address of x (&x) is: "<<&x<<endl;
	cout<<"Value of x is (x): "<<x<<endl<<endl;
	
	ptr = &x;	//store address of x in pointer variable
	
	cout<<"Addree stored in pointer variable(ptr): "<<ptr<<endl;
	cout<<"Content of the address pointer ptr holds (*ptr): "<<*ptr<<endl;
	
	system("pause");
}
