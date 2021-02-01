#include <iostream>
using namespace std;

int main()
{
	int i,j,rows,k=0,cnt=0,cnt1=0;
	
	cout<<"Enter the number of rows:\n";
	cin>>rows;
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows-i;j++)
		{
			cout<<" ";
			cnt++;
		}
		
		while(k!=2*i-1)
		{
			if(cnt<=rows-1)
			{
				cout<<i+k<<" ";
				cnt++;
			}
			else
			{
				cnt1++;
				cout<<i+k-2*cnt1<<" ";
			}
			k++;
		}
		cnt1=cnt=k=0;
		cout<<"\n";
	}
	
	system("pause");
}
