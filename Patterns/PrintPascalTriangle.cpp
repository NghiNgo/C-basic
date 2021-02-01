#include <iostream>
using namespace std;

int main()
{
	int n, start=1, j, i, k;
	
	cout<<"Enter number of rows: ";
	cin>>n;
	
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			cout<<" ";
		for(k=0;k<=i;k++)
		{
			if(k==0||i==0)
				start=1;
			else
				start=start*(i-k+1)/k;
			
			cout<<" "<<start;
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
