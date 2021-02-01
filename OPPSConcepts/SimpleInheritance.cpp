#include <iostream>
using namespace std;

//Base class
class Base
{
	int a;
	
	public:
		int b;
		int c;
	
	void get_data();
	int get_a(void);
	void show_data();
};

//Derived class
class Devired: public Base
{
	public:
		void add();
};

void Base::get_data()
{
	cout<<"\nEnter the numbers to be added: ";
	cin>>a>>b;
}

int Base::get_a()
{
	return a;
}
void Devired::add()
{
	c=get_a()+b;
}

void Base::show_data()
{
	cout<<"\nValue of a = "<<get_a()<<", value of b = "<<b;
	cout<<"\nAddition of number is: "<<c<<endl;
}

int main(void)
{
	Devired d;
	d.get_data();
	d.add();
	d.show_data();
	
	system("pause");
	return 0;
}
