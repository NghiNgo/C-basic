#include <iostream>
using namespace std;

int binary_search(int*,int,int,int,int);

int main()
{
	int arr[10],i,num,key,result,left,right;
	
	cout<<"Enter the number of elements in array: ";
	cin>>num;
	
	cout<<"Enter the elements in array: \n";
	for(i=0;i<num;i++)
		cin>>arr[i];
		
	cout<<"Enter the number to be search: ";
	cin>>key;
	
	left=0,right=num-1;
	
	result=binary_search(arr,num,key,left,right);
	
	if(result==0)
		cout<<"\nNumber is not found.";
	else
		cout<<"\nNumber is found.";

	system("pause");
	return 0;
}

int binary_search(int a[],int num,int key,int left,int right)
{
	int mid,result=0;
	
	if(left<=right)
	{
		mid=(left+right)/2;
		
		if(key==a[mid])
			result=1;
		else if(key<a[mid])
			return binary_search(a,num,key,left,mid-1);
		else 
			return binary_search(a,num,key,mid+1,right);
	}
	else
		return result;
}
