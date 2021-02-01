#include <iostream>
using namespace std;

int main()
{
	float arr[5];
	
	//Inserting data using pointer in array
	cout<<"Enter any 6 number in array: ";
	for(int i=0;i<6;i++)
		cin>>*(arr+i);
		
	//Displaying data using pointer in array
	cout<<"\nDisplaying data: "<<endl;
	
	for(int i=0;i<6;++i)
		cout<<*(arr+i)<<endl;
}
