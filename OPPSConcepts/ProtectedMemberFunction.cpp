#include <iostream>
using namespace std;

class Student	//Base class
{
	protected:
		char name[100];
		double roll_no;
		
	void get_details();
};

class academic: public Student	//derived class
{
	public:
		double marks;
		void academic_details();
		void display();
};

void academic::academic_details()
{
	get_details();
	
	cout<<"\nEnter your marks: ";
	cin>>marks;
}

void academic::display()
{
	cout<<"\nStudent details.\n";
	
	cout<<"Name: "<<name;
	cout<<"\nRoll no: "<<roll_no;
	cout<<"\nMarks: "<<marks<<endl;
}

void Student::get_details()
{
	cout<<"\nEnter your name: ";
	cin>>name;
	
	cout<<"\nEnter your roll no: ";
	cin>>roll_no;
}

int main()
{
	academic a;
	a.academic_details();
	a.display();
	
	system("pause");
	return 0;
}
