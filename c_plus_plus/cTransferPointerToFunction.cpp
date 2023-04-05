#include <iostream>
#include<ctime>
using namespace std;

// before you write a function, firstly declare this function (this is a good habit)
void getSends(unsigned long *ptr);
double getAverage(int *arr, int size);


int main()
{
	unsigned long sec;
	getSends( &sec);
	
	//output the actual vale
	cout << "Number of seconds: " << sec << endl;
	
	int array[5] = {1000, 2, 3, 17, 50};
	double average;
	average = getAverage(array,5);
	cout << "The Average value is: " << average << endl;
	
	return 0;
	
}

void getSends(unsigned long *ptr)
{
	//get the current seconds
	*ptr = time (NULL);
	return;
}

double getAverage(int *arr, int size)
{
	int i,j, sum = 0;
	double avg;
	for( i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	avg = double(sum)/size;
	return avg;
}
