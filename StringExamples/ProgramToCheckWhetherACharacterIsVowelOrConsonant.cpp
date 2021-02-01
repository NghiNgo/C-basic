#include <iostream>
using namespace std;

int main()
{
	char ch;
	
	cout<<"Enter any alphabet of our choice: ";
	cin>>ch;
	
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		cout<<endl<<ch<<" is a vowel.";
	else
		cout<<endl<<ch<<" is not a vowel (called as consonant).";
}
