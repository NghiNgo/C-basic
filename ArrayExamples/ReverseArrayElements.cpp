#include <iostream>
using namespace std;

int main()
{
	int i, j, n, arr1[100], arr2[100];
	
	cout<<"Enter the number of elements in array: ";
	cin>>n;
	
	cout<<"Enter the array elements:\n";
	for(i=0;i<n;i++)
		cin>>arr1[i];
		
	//Copy reversed array into original.
	for(i=i-1,j=0;i>=0;i--,j++)
		arr2[j]=arr1[i];
		
	//modifying original array, this is optional.
	for(i=0;i<n;i++)
		arr1[i]=arr2[i];
	
	cout<<"\nReverse array is:\n";
	
	for(i=0;i<n;i++)
		cout<<arr1[i]<<endl;
}
