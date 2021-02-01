#include <iostream>
using namespace std;

class Student
{
	public:
		char name;
		int roll_no;
		int marks;
		
		//Default Constructor
		Student();
		
		void display_data()
		{
			cout<<"Value from default constructer are: "<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Roll no: "<<roll_no<<endl;
			cout<<"Marks: "<<marks<<endl;
		}
};

Student::Student()
{
	name='A';
	roll_no=1;
	marks=1;
}

int main()
{
	Student s;	//invoke Default Constructor
	
	s.display_data();
	
	system("pause");
	return 0;
}
