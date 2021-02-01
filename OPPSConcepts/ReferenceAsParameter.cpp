#include <iostream>
using namespace std;

void swap(int&,int&);	//function declaration

int main()
{
	int num1, num2;
	
	cout<<"Enter the numbers to be swapped:\n";
	cin>>num1>>num2;
	
	swap(num1,num2);	//function call
	
	cout<<"\nAfter Swapping numbers,\nValue of first number is: "<<num1;
	cout<<"\nValue of second number is: "<<num2;
	
	return 0;
}

void swap(int&x,int&y)	//function definition
{
	int temp;
	
	temp=x;
	x=y;
	y=temp;
	
	return;
}
