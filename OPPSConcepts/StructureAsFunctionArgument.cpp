#include <iostream>
using namespace std;

struct personal_details
{
	char name[100];
	char address[100];
	long contact_no;
};

void display_data(personal_details);

int main()
{
	personal_details user1, user2;
	
	cout<<"User1 ";
	cout<<"\nEnter your Full name: ";
	cin>>user1.name;
	
	cout<<"Enter your address: ";
	cin>>user1.address;
	
	cout<<"Enter your contact number: ";
	cin>>user1.contact_no;
	
	cout<<"\nUser2 ";
	cout<<"Enter your Full name: ";
	cin>>user2.name;
	
	cout<<"Enter your address: ";
	cin>>user2.address;
	
	cout<<"Enter your contact number: ";
	cin>>user2.contact_no;
	
	cout<<"\nDisplaying User Information. ";
	cout<<"\nDetails of USER 1";
	display_data(user1);
	
	cout<<"\nDetails of USER 2";
	display_data(user2);
	
	system("pause");
}

void display_data(personal_details user)
{
	cout<<"\nName: "<<user.name<<endl;
	cout<<"Address: "<<user.address<<endl;
	cout<<"Contact no: "<<user.contact_no<<endl;
}
