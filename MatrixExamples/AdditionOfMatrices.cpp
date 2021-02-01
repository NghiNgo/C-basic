#include <iostream>
using namespace std;

int main()
{
	int m, n, i, j, mat1[10][10], mat2[10][10], add[10][10];
	
	cout<<"Enter the number of rows and columns of matrix:\n";
	cin>>m>>n;
	
	cout<<"Enter the elements in first matrix:\n";
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>mat1[i][j];
			
	cout<<"Enter the elements of second matrix:\n";
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>mat2[i][j];
			
	//addition of matrix
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			add[i][j]=mat1[i][j]+mat2[i][j];
		
	cout<<"Addition of matrix is:\n";
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cout<<add[i][j]<<"\t";
		cout<<endl;
	}
}
