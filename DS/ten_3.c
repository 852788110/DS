//write a function that returns the largest value stored in an array-of-int.
#include "ten_3.h"
int largest_of_array(const int array[],int num)
{
	int max=*array;
	for(int i=1;i<num;i++)
	{
		if(max<array[i])
		{
			max=array[i];
		}
	}
	return max;
}

int smallest_of_array(const int array[],int num)
{
    int min=*array;
	for(int i=1;i<num;i++)
	{
		if(min>array[i])
		{
			min=array[i];
		}
	}
	return min;
}
