#include <iostream>
using namespace std;

int main()
{
	int i,j,n,k;
	
	cout<<"Enter the number of rows in pyramid:\n";
	cin>>n;
	
	k=n;
	
	for (i=1;i<=n;i++)
	{
		for (j=1;j<k;j++)
			cout<<" ";
		k--;
		
		for(j=1;j<=2*i-1;j++)
			cout<<"*";
			
		cout<<"\n";
	}
	
	system("pause");
}
