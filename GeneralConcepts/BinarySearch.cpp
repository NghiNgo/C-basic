#include <iostream>
using namespace std;

int main()
{
	int first, last, middle, n, search, array[100];
	
	cout<<"Enter number of elements in array[100]:\n";
	cin>>n;
	
	cout<<"Enter elements in array:\n";
	for(int i=0;i<n;i++)
		cin>>array[i];
		
	cout<<"Enter elements to find:\n";
	cin>>search;
	
	first = 0;
	last = n - 1;
	middle = (first+last)/2;
	
	while( first <= last )
	{
		if( array[middle] == search )
		{
			cout<<search<<" found at location "<<middle+1<<endl;
			break;
		}
		else if( array[middle] < search )
			first = middle + 1;
		else 
			last = middle - 1;
		middle = (first + last)/2;
	}
	
	if( first > last )
		cout<<"Not found! "<<search<<" is not present in the list.\n";
	
	system("pause");
	return 0;
}
