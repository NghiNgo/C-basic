#include <iostream>
using namespace std;

class student_data
{
	public:
		char name[50];
		int roll_no;
		
		void get_data();	//Member function declaration
		
		int display_data();
};

void student_data::get_data()	//Member functions definitions
{
	cout<<"Enter your name: ";
	cin>>name;
	
	cout<<"Enter your roll no: "<<endl;
	cin>>roll_no;
}
int student_data::display_data()
{
	cout<<"\n\nStudent details.\n";
	
	cout<<"Name: "<<name;
	cout<<"\nRoll no: "<<roll_no;
}

int main()
{
	student_data s1, s2;
	
	s1.get_data();
	s2.get_data();
	
	s1.display_data();
	s2.display_data();
	
	system("pause");
	return 0;
}
