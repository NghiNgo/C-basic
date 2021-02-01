#include <iostream>
using namespace std;

class Base_class	//Abstract base class
{
	public:
		virtual void show_data() = 0;	//Pure Virtual Function
};

class Derived_class: public Base_class
{
	public:
		void show_data()
		{
			cout<<"This is a simple example to explain abstract class..."<<endl;
		}
};

int main()
{
	Derived_class baseobj;
	Derived_class dobj;
	
	Base_class *b;
	
	b = &dobj;
	b->show_data();
	
	system("pause");
	return 0;
}
