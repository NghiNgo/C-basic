#include <iostream>
using namespace std;

int main()
{
	int arr[100], position, i, n, value;
	
	cout<<"Enter number of elements in array(start from 1): ";
	cin>>n;
	
	cout<<"Enter the array elements:\n";
	for(i=0;i<n;i++)
		cin>>arr[i];
		
	cout<<"Enter the position of element in the array: ";
	cin>>position;
	
	cout<<"Enter the element at position "<<position<<": ";
	cin>>value;
	
	for(i=n-1;i>=position-1;i--)
		arr[i+1]=arr[i];
		
	//from given position shifting all elements by 1 position
	
	arr[position-1]=value;
	
	//inserting value to given position
	
	cout<<"Resultant array is:\n";
	for(i=0;i<=n;i++)
		cout<<arr[i]<<endl;
}
