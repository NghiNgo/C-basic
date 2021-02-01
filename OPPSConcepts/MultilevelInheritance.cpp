#include <iostream>
using namespace std;

//Base class
class Student
{
	protected:
		char name[20];
		int roll_no;
		
	public:
		void get_details();
};

void Student::get_details()
{
	cout<<"Enter Student Details";
	cout<<"\nEnter your Name: ";
	cin>>name;
	cout<<"\nEnter your Roll no: ";
	cin>>roll_no;
}

class academics: public Student
{
	protected:
		int maths, science, english;
		
	public:
		void get_marks()
		{
			cout<<"\nEnter the subject marks (for maths, science, english): ";
			cin>>maths>>science>>english;
		}
};

class Result: public academics
{
	int total;
	
	public:
		void total_marks();
		void display_details();
};

void Result::total_marks()
{
	get_details();
	get_marks();
	total=maths+science+english;
}

void Result::display_details()
{
	cout<<"\n\nStudent Records";
	cout<<"\nName: "<<name<<"\nRoll no: "<<roll_no<<"\nTotal Marks obtained: "<<total;
}

int main()
{
	Result R;
	
	R.total_marks();
	R.display_details();
	
	system("pause");
	return 0;
}

