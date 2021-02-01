#include <iostream>
using namespace std;

void swap(int *,int *);	//function declaration

int main()
{
	int num1, num2;
	
	cout<<"Enter the numbers to be swapped: ";
	cin>>num1>>num2;
	
	swap(&num2,&num2);	//passing value to function
	
	cout<<"\nAfter Swapping numbers,\nValue of first number is: "<<num1;
	cout<<"\nValue of second number is: "<<num2;
	
	system("pause");
	return 0;
}

//function defination
void swap(int *num1, int *num2)
{
	int temp;
	
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}
