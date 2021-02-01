#include <iostream>
using namespace std;

class Mean
{
	int n1, n2;
	
	public:
		void get_value()
		{
			cout<<"Enter any two numbers to calculate mean: ";
			cin>>n1>>n2;
		}
		
	friend float mean(Mean m);
};

float mean(Mean m)
{
	return float(m.n1 + m.n2)/2.0;
}

int main()
{
	Mean m;
	
	m.get_value();
	
	cout<<"\nMean value of numbers is: "<<mean(m)<<endl;
	
	system("pause");
	return 0;
}
