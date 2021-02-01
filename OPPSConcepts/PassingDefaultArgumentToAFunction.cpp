#include <iostream>
using namespace std;

void display(char='C', int=10);

int main()
{
	cout<<"No argument is passed to the function:\n";
	display();
	
	cout<<"\nSingle argument is passed to th function:\n";
	display('+');
	
	cout<<"\nBoth argument are passed to the function: \n";
	display('+',5);
	
	system("pause");
	return 0;
}

void display(char c, int n)
{
	for(int i=1;i<=n;++i)
		cout<<c;
	cout<<endl;
}
