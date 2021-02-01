#include <iostream>
using namespace std;

int main()
{
	int arr[100], maximum, size, position=1;
	
	cout<<"Enter the number of elements in array: ";
	cin>>size;
	
	cout<<"\nEnter the elements in array: ";
	for(int i=0;i<size;i++)
		cin>>arr[i];
		
	maximum=arr[0];
	
	//assuming first no, as maximum
	for(int i=1;i<size;i++)
		if(arr[i]>maximum)
		{
			maximum=arr[i];
			position=i+1;
			//If any no, greater than maximum found then set it as maximum and save its location
		}
		
	cout<<"Maximum element in array is present at position "<<position<<" and it's value is = "<<maximum<<endl;
}
