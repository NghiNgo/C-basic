#include <iostream>
using namespace std;

int main()
{
	char end_char, start='A';

	cout<<"Enter uppercase character you want in triangle at last row: \n";
	cin>>end_char;

	for(int i=1;i<=(end_char-'A'+1);i++)
	{
		for(int j=1;j<=i;j++)
			cout<<start<<" ";
		start++;
		cout<<endl;
	}


	return 0;
}
