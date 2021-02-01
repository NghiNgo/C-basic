#include <iostream>
using namespace std;

class complex
{
	float a, b;
	
	public:
		complex()
		{
		}
		complex(float real, float imaginary)
		{
			a = real;
			b = imaginary;
		}
		complex operator + (complex);
		void display(void);
};

complex complex::operator + (complex c)
{
	complex temp;
	temp.a = a + c.b;
	temp.b = b + c.a;
	
	return (temp);
}

void complex::display(void)
{
	cout<<a<<" + i"<<b<<"\n";
}

int main()
{
	complex c, c1, c2;
	
	c1 = complex(3.5,6.1);
	c2 = complex(2.0,1.9);
	
	c=c1+c2;
	
	cout<<"C1 = ";
	c1.display();
	
	cout<<"C2 = ";
	c2.display();
	
	system("pause");
	return 0;
}
