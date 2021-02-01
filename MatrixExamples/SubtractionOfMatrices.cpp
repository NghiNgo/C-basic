#include <iostream>
using namespace std;

int main()
{
	int m, n, i, j, matrix1[10][10], matrix2[10][10], subtract[10][10];
	
	cout<<"Enter the number of rows and columns of matrix:\n";
	cin>>m>>n;
	
	cout<<"Enter the elements of first matrix:\n";
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>matrix1[i][j];
	
	cout<<"Enter the elements of second matrix:\n";
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>matrix2[i][j];
			
	//Subtraction of Matrices
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			subtract[i][j]=matrix1[i][j]-matrix2[i][j];
			
	cout<<"Subtraction of the Two matrices is:\n";
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cout<<subtract[i][j]<<"\t";
		cout<<endl;
	}
}
