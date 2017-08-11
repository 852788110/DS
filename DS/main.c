#include <stdio.h>
#include "rand0.h"
//int largest-of-array(int *array,int num)
//int rand0(int max);
#define N 20
int main(void)
{
	printf("successful!!!");
	int array[N],i=0;
	for(;i<N;i++)
	{
		array[i]=random(10);
	}
	
	for(i=0;i<N;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
}
