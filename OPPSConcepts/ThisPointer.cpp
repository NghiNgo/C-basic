#include <iostream>
using namespace std;

//local variable is same as a member's name

class A
{
	private:
		int a;
		
	public:
		void set_value (int a)
		{
			this->a=a;
		}
		void print_value()
		{
			cout<<"Value of number to be printed = "<<a<<endl;
		}
};

int main()
{
	A obj;
	
	int num = 100;
	
	obj.set_value(num);
	obj.print_value();
	
	system("pause");
}
