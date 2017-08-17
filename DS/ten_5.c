//return the difference between the largest and smallest elements of an array-of-int
#include "ten_5.h"
#include "ten_3.h"
int dif_lar_sma(const int array[],int n)
{
	int lar,min;
	lar=largest_of_array(array,n);
	min=smallest_of_array(array,n);
	return lar-min;
}

