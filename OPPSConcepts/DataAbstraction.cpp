#include <iostream>
using namespace std;

class Area
{
	private:
		int length, breadth, area;	//data hidden
		
	public:
		void rectangle()
		{
			cout<<"Enter length and breadth of rectangle: ";
			cin>>length>>breadth;
			
			area = length * breadth;
			
			cout<<"Area of rectangle is: "<<area<<" units"<<endl;
		}
};

int main()
{
	Area a;
	a.rectangle();
	
	system("pause");
}
