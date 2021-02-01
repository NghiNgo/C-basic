#include <iostream>
using namespace std;

void bubble_sort(int[],int);

int main()
{
	int arr[100],num,i,swap;
	
	cout<<"Enter number of elements: ";
	cin>>num;
	
	cout<<"Enter the elements in array to be sorted:\n";
	for(i=0;i<num;i++)
		cin>>arr[i];
		
	bubble_sort(arr,num);
	
	cout<<"Sorted array list is:\n";
	for(i=0;i<num;i++)
		cout<<arr[i]<<"\n";
		
	system("pause");
	return 0;
}

void bubble_sort(int sorted_arr[],int n)
{
	int temp;
	
	for(int i=0;i<(n-1);i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(sorted_arr[j]>sorted_arr[j+1])
			{
				temp=sorted_arr[j];
				sorted_arr[j]=sorted_arr[j+1];
				sorted_arr[j+1]=temp;
			}
		}
	}
}
