#include <iostream>
using namespace std;

#define ARR_SIZE 10

int main()
{
	int array[ARR_SIZE];
	
	cout<<"\nThe size of array element is: "<<ARR_SIZE;
	
	cout<<"\nEnter Array element: ";
	for(int i;i<=ARR_SIZE;i++)
	{
		cin>>array[i];
	}
	
	cout<<"\nArray Elements are: \n";
	for(int i;i<ARR_SIZE;i++)
		cout<<"\t"<<array[i];
		
	system("pause");
	return 0;
}
