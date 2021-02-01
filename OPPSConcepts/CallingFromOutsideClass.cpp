#include <iostream>
using namespace std;

class addition
{
	private:
		int n1;
		float n2;
		float result;
		
	public:
		void get_data();
		void calc_add();
};

void addition::get_data()
{
	cout<<"\nEnter the two numbers to be added: ";
	cin>>n1>>n2;
}

void addition::calc_add()
{
	result=n1+n2;
	cout<<"\nResult of two numbers is: "<<result<<endl;
}

int main()
{
	addition a;
	
	a.get_data();
	a.calc_add();
	
	system("pause");
	return 0;
}
