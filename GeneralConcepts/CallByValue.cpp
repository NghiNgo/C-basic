#include <iostream>
using namespace std;

//function declaration
int addition(int x, int y);

int main()
{
	int num1, num2;
	int sum;
	
	cout<<"Enter numbers to be added: ";
	cin>>num1>>num2;
	
	cout<<"\nNumber to be added are: "<<num1<<" and "<<num2<<endl;
	
	//Funtion call to add numbers
	sum = addition(num1, num2);//call by value of variables
	
	cout<<"Addition of two numbers = "<<sum<<endl;
	
	system("pause");
	return 0;
}

int addition(int x, int y)
{
	int add;
	add = x+y;
	
	return add;
}
