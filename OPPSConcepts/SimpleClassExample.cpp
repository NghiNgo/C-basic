#include <iostream>
using namespace std;

class Area
{
	public:
		int base;
		int breadth;
		int height;
		int length;
		int side;
};

int main()
{
	Area A1, A2, A3;
	float area;
	
	cout<<"Area of Rectangle.\n";
	
	cout<<"Enter the length of rectangle: ";
	cin>>A1.length;
	
	cout<<"Enter the breadth of rectangle: ";
	cin>>A1.breadth;
	
	cout<<"\nArea of Square.\n";
	
	cout<<"Enter the sides of Square: ";
	cin>>A2.side;
	
	cout<<"\nArea of traingle.\n";
	
	cout<<"Enter the base of traingle: ";
	cin>>A3.base;
	
	cout<<"Enter the height of traingle: ";
	cin>>A3.height;
	
	area=A1.length*A1.breadth;
	cout<<"\nArea of rectangle is = "<<area<<"units.";
	
	area=A2.side*A2.side;
	cout<<"\nArea of square is = "<<area<<"units.";
	
	area=A3.base*A3.height/2;
	cout<<"\nArea of traingle is = "<<area<<"units.";
	
	system("pause");
	return 0;
}
