#include <iostream>
using namespace std;

class Student
{
	public:
		char name;
		int roll_no;
		int marks;
		
	//Parametrized Constructor
	
	Student(char Fname, int rollno, int score)
	{
		name = Fname;
		roll_no = rollno;
		marks = score;
	}
	
	void display_data()
	{
		cout<<"Values from Parametrized constructer are:"<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Roll no: "<<roll_no<<endl;
		cout<<"Marks: "<<marks<<endl;
	}
};

int main()
{
	Student s('Z',1,45);	//invoke Parametrized Constructor
	
	s.display_data();
	
	system("pause");
	return 0;
}
