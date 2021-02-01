#include <iostream>
using namespace std;

int main()
{
	int m, n, i, j, matrix[10][10], transpose[10][10];
	
	cout<<"Enter the number of rows and columns of matrix:\n";
	cin>>m>>n;
	
	cout<<"Enter the elements of matrix:\n";
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>matrix[i][j];
	
	//transpose by interchaging rows and columns
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			transpose[i][j]=matrix[i][j];
			
	cout<<"Transpose of given matrix is:\n";
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cout<<transpose[i][j]<<"\t";
		cout<<"\n";
	}
}
