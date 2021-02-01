#include <iostream>
#define size 16
using namespace std;

int main()
{
	int m, n;
	int arr[size][size];
	
	cout<<"Enter the number of rows and columns: "<<endl;
	cin>>m>>n;
	
	cout<<"Enter the Elements in Table: "<<endl;
	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
			
	//output each array elements's value
	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			cout<<"arr["<<i<<"]["<<j<<"]: ";
			cout<<arr[i][j]<<endl;
		}
		
}
