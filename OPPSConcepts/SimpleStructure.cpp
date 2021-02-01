#include <iostream>
using namespace std;

struct personal_details
{
	char name[100];
	char address[100];
	long contact_no;
};

int main()
{
	personal_details user1, user2;
	
	cout<<"\nUser1 ";
	cout<<"Enter your Full name: ";
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
	
	cout<<"\nDisplaying User Information.";
	cout<<"\nDetails of USER 1";
	
	cout<<"\nName: "<<user1.name<<endl;
	cout<<"Address: "<<user1.address<<endl;
	cout<<"Contact no: "<<user1.contact_no<<endl;
	
	cout<<"\nDetails of USER 2";
	
	cout<<"\nName: "<<user2.name<<endl;
	cout<<"Address: "<<user2.address<<endl;
	cout<<"Contact no: "<<user2.contact_no<<endl;
	
	system("pause");
}
