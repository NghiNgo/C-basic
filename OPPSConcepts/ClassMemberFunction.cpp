#include <iostream>
using namespace std;

class rectangle
{
	public:
		double length;
		double breadth;
		double area;
		
		//Member functions declaration
		
		void calucate_area(void);
		void get_dimensions();
		void display();
};

//Member functions definitions
void rectangle::calucate_area()
{
	area=length*breadth;
}

void rectangle::get_dimensions()
{
	cout<<"\nEnter the length and breadth of rectangle to be calculated: ";
	cin>>length>>breadth;
}

void rectangle::display()
{
	cout<<"\nLength if rectangle = "<<length<<", Breadth of rectangle = "<<breadth;
	
	calucate_area();
	
	cout<<"\nArea of rectangle is: "<<area<<" units."<<endl;
}

int main()
{
	rectangle r;
	
	r.get_dimensions();
	r.display();
	
	system("pause");
	return 0;
}
