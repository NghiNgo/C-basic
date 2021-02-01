#include <iostream>
using namespace std;

int addition(int, int);	//Function prototype(declaration)

int subtract(int, int);

int main()
{
	int num1, num2, add, sub;
	
	cout<<"Enters two numbers to add: ";
	cin>>num1>>num2;
	
	//Function call
	add=addition(num1, num2);
	sub=subtract(num1, num2);
	
	cout<<"\nAddition of numbers is = "<<add;
	cout<<"\nSubtraction of numbers is = "<<sub<<endl;
	
	system("pause");
	return 0;
}

int addition(int a, int b)	//Function declarator
{
	int add;
	add=a+b;
	return add;
}

int subtract(int a, int b)	//Function declarator
{
	int sub;
	sub=a-b;
	return sub;
}
