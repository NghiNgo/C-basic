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
	struct personal_details user[5];
	
	for(int i=0;i<3;i++)
	{
		cout<<"\nUser"<<i+1;
		cout<<"\nEnter your Full name: ";
		cin>>user[i].name;
		
		cout<<"\nEnter your address: ";
		cin>>user[i].address;
		
		cout<<"\nEnter your contact number: ";
		cin>>user[i].contact_no;
	}
	
	cout<<"\n\nDisplaying User Information.";
	for(int i=0;i<3;i++)
	{
		cout<<"\nDetails of USER"<<i+1;
		cout<<"\nName: "<<user[i].name;
		cout<<"Address: "<<user[i].address<<endl;
		cout<<"Contact no: "<<user[i].contact_no<<endl;
	}
	
	system("pause");
}
