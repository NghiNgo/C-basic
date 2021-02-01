#include <iostream>
using namespace std;

int main()
{
	int i,j,n,k=1;
	
	cout<<"Enter the number of rows in pyramid:\n";
	cin>>n;
	
	k=n-1;
	
	//printing upper half part of diamond
	for (i=1;i<=n;i++)
	{
		//leaving space before printing *
		for (j=1;j<=k;j++)
			cout<<" ";
		k--;
		
		for (j=1;j<=2*i-1;j++)
			cout<<"*";
		cout<<"\n";
	}
	
	k=1;
	
	//printing lower half part of diamond
	for (i=1;i<=n;i++)
	{
		//leaving space before printing *
		for (j=1;j<=k;j++)
			cout<<" ";
		k++;
		
		for (j=1;j<=2*(n-i)-1;j++)
			cout<<"*";
		cout<<"\n";
	}
	system("pause");
}
