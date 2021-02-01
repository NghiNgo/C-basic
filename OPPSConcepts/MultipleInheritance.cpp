#include <iostream>
using namespace std;

//Base class
class Base1
{
	protected:
		int a;
	
	public:
		int get_a(void);
};

class Base2
{
	protected:
		int b;
		int c;
	
	public:
		int get_b(void);
};

class Derived: public Base1,public Base2
{
	protected:
		int c;
		
	public:
		void cal_Addition();
		void get_data();
		void display_result();
};

void Derived::get_data()
{
	cout<<"\nEnter the numbers to be added: ";
	cin>>a>>b;
}
int Base1::get_a()
{
	return a;
}
int Base2::get_b()
{
	return b;
}

void Derived::cal_Addition()
{
	c=get_a()+get_b();
}
void Derived::display_result()
{
	cout<<"\nValue of a = "<<get_a()<<", value of b = "<<get_b();
	cout<<"\nAddition of number is: "<<c;
}

int main()
{
	Derived d;
	
	d.get_data();
	d.cal_Addition();
	d.display_result();
	cout<<endl;
	
	system("pause");
	return 0;
}
