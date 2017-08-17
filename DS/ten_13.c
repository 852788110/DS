//The mission has serveral submissions, so I do not to list all of these for the sake of time.
#include <stdio.h>
#include "rand0.h"
#include "ten_13.h"
# define ROW 5
# define COL 3
# define MAX 90
void display(int (*ar)[ROW]);
int largest_of_all(const int ar[][ROW]);
int aver_each_row(const int ar[]);
int aver_all(const int ar[][ROW]);

void ten13()
{
	int array[COL][ROW];
	//initializing
	for(int i=0;i<COL;i++)
	{
		for(int j=0;j<ROW;j++)
		{
			array[i][j]=random(MAX);
		}
	}
	printf("The original array is: \n");
	display(array);
	for(int i=0;i<COL;i++)
	{
		printf("The %dth average is %d.\n",i,aver_each_row(array[i]));
	}	
	printf("The average of all is %d\n",aver_all(array));
	printf("The largest element of the array is %d.",largest_of_all(array));
}

int aver_each_row(const int ar[])
{
	int sum;
	for(int i=0;i<ROW;i++)
	{
		sum+=ar[i];
	}
	return sum/ROW;
}

int aver_all(const int ar[][ROW])
{
	int sum;
	for(int i=0;i<COL;i++)
	{
		for(int j=0;j<ROW;j++)
		{
			sum+=ar[i][j];
		}
	}
	return sum/(COL*ROW);
}

int largest_of_all(const int ar[][ROW])
{
	int sss;
	for(int i=0;i<COL;i++)
	{
		for(int j=0;j<ROW;j++)
		{
			if(ar[i][j]>sss)
			{
				sss=ar[i][j];
			}
		}
	}
	return sss;
}











