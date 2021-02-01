#include <iostream>
using namespace std;

int main()
{
	int arr[100], minimum, size, position=1;
	
	cout<<"Enter the elements in array:\n";
	cin>>size;
	
	cout<<"\nEnter the elements in array:\n";
	for(int i=0;i<size;i++)
		cin>>arr[i];
		
	minimum=arr[0];	//assuming first no. as minimum
	
	for(int i=1;i<size;i++)
		if(arr[i]<minimum)
		{
			minimum=arr[i];
			position=i+1;
			//If any no. lesser than minimum found then set it as minimum and save its location
		}
		
	cout<<"Minimum element is present at position "<<position
		<<" and it's value is "<<minimum<<endl;
}
