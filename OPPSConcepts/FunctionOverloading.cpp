#include <iostream>
using namespace std;

float result;

int find_area(int);
float find_area(float);
int find_area(int, int);
float find_area(int, float);

int find_area(int side)
{
	int result;
	result=side*side;
	
	return result;
}

float find_area(float radius)
{
	float result;
	result=(3.14*radius*radius);
	
	return result;
}

int find_area(int length, int breadth)
{
	int result;
	result=length*breadth;
	
	return result;
}

float find_area(int base, float height)
{
	float result;
	result=(0.5*base*height);
	
	return result;
}

int main(void)
{
	int side, length, breadth;
	float radius, base, height;
	
	cout<<"Enter sides of square: ";
	cin>>side;
	
	cout<<"Area of square: "<<find_area(side);
	
	cout<<"\n\nEnter radius of circle: ";
	cin>>radius;
	
	cout<<"Area of circle: "<<find_area(radius);
	
	cout<<"\n\nEnter length and breadth of rectangle: ";
	cin>>length>>breadth;
	
	cout<<"Area of rectangle: "<<find_area(length,breadth);
	
	cout<<"\n\nEnter base and height of traingle: ";
	cin>>base>>height;
	
	cout<<"Area of traingle: "<<find_area(base,height)<<endl;
	
	system("pause");
	return 0;
	
	
}
