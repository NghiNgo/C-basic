#include <iostream>
using namespace std;

int *getElements()
{
	static int arr[5];
	
	for(int i=0;i<5;++i)
	{
		cout<<"Enter the element at "<<i<<": ";
		cin>>arr[i];
	}
	cout<<endl;
	
	for(int i=0;i<5;i++)
		cout<<arr[i]<<endl;
	return arr;
}

//main function to call above defined function.

int main()
{
	//a pointer to an int.
	int*ptr;
	
	ptr=getElements();
	
	for(int i=0;i<5;i++)
	{
		cout<<"*(ptr + "<<i<<"): ";
		cout<<*(ptr+i)<<endl;
	}
}
