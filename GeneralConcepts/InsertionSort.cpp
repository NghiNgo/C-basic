#include <iostream>
using namespace std;

int main()
{
	int num, arr[100], i, j, temp;
	
	cout<<"Enter number of elements: ";
	cin>>num;
	
	cout<<"Enter the elememts in array to be sorted:\n";
	for(i=0;i<num;i++)
		cin>>arr[i];
	
	for(i=1;i<=num-1;i++)
	{
		j=i;
		
		while(j>0&&arr[j]<arr[j-1])
		{
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
	
	cout<<"Sorted array is:\n";
	for(i=0;i<=num-1;i++)
		cout<<arr[i]<<"\n";
		
	system("pause");
	return 0;
}
