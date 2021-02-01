#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	
	cout<<"Enter 5 numbers: ";
	
	//Storing 5 number entered by user in an array using for loop.
	
	for(int i=0;i<6;i++)
		cin>>arr[i];
		
	cout<<"\nFirst number: "<<arr[0];	//first element of an array is arr[0]
	
	cout<<"\nLast number: "<<arr[5];	//last element of an array is arr[SIZE_OF_ARRAY-1]
}
