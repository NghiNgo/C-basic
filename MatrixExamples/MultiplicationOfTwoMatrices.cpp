#include <iostream>
using namespace std;

int main()
{
	int m, n, p, q, i, j, k, sum=0; 
	int matrix1[10][10], matrix2[10][10], multiply[10][10];
	
	cout<<"Enter the number of rows and columns of matrix:\n";
	cin>>m>>n;
	
	cout<<"Enter the elements of first matrix:\n";
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>matrix1[i][j];
			
	cout<<"Enter the number of rows and columns of second matrix:\n";
	cin>>p>>q;
	
	if(n!=p)
		cout<<"Matrices with entered orders can't be multiplied with each other.\n";
	else
	{
		cout<<"Enter the elements of second matrix:\n";
	
		for(i=0;i<p;i++)
			for(j=0;j<q;j++)
				cin>>matrix2[i][j];
				
		for(i=0;i<m;i++)
			for(j=0;j<q;j++)
			{
				for(k=0;k<p;k++)
					sum=sum+matrix1[i][k]*matrix2[k][j];
				multiply[i][j]=sum;
				sum=0;
			}	
	}
	
	cout<<"Multiplication of two Matrices is:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
			cout<<multiply[i][j]<<"\t";
		cout<<endl;
	}
}
	
	
