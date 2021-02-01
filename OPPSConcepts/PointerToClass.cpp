#include <iostream>
using namespace std;

class rectangle
{
	public:
		//Constructor definition
		rectangle(float l, float b)
		{
			length = l;
			breadth = b;
		}
		float Area()
		{
			return length*breadth;
		}
	private:
		float length;
		float breadth;
};

int main(void)
{
	rectangle obj1(15,3);
	
	rectangle obj2(7.5,5);
	
	rectangle*ptr;
	
	ptr=&obj1;
	cout<<"Rectangle have length and breadth as 15 and 3:\nArea = "<<ptr->Area()<<endl;
	
	ptr=&obj2;
	cout<<"Rectangle have length and breadth as 9.5 and 5:\nArea = "<<ptr->Area()<<endl;
	
	system("pause");
}
