#include <iostream>
using namespace std;

class Dynamic
{
	public:
		Dynamic()
		{
			cout<<"Contructor called.\n";
		}
		~ Dynamic()
		{
			cout<<"Destructor called.\n";
		}
};

int main()
{
	Dynamic*d = new Dynamic[5];
	
	delete[]d;
	
	return 0;
}
