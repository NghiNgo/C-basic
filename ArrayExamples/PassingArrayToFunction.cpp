#include <iostream>
using namespace std;

//function declaration
double getAverage(int arr[], int);

int main()
{
	//an int array with 8 ages of people
	int ages[6] = {22, 21, 89, 17, 25, 45};
	
	double avg;
	
	//pass pointer to the array as an argument
	avg = getAverage(ages, 6);
	
	//output the returned value
	cout<<"Average of all ages is: "<<avg<<endl;
}

double getAverage(int arr[], int size)
{
	int i, sum=0;
	double avg;
	
	for(i=0;i<size;++i)
		sum+=arr[i];
		
	avg=double(sum)/size;
	
	return avg;
}
