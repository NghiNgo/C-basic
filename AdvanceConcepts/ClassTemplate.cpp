#include <iostream>
using namespace std;
template <class T>

class min_max
{
	public:
		int min(T&a, T&b)
		{
			return (a<b)?a:b;
		}
		int max(T&a, T&b)
		{
			return(a>b)?a:b;
		}
};

int main()
{
	int a, b, result;
	
	cout<<"Enter any two number to find minimum of: ";
	cin>>a>>b;
	
	result=min(a,b);
	
	cout<<"\nMinimum of two number is: "<<result;
	cout<<"\nEnter any two number to find maximum of: ";
	cin>>a>>b;
	
	result=max(a,b);
	
	cout<<"\nMaximum of two number is: "<<result;
	
	return 0;
}
