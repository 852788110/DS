//declear a 3*5 array of int ,initialize it,double it and display it  
#include "ten_11.h"
#include "rand0.h"
#include <stdio.h>
# define ROW 5
# define COL 3
# define MAX 90

void display(int (*ar)[ROW]);
void double_it(int (*ar)[ROW]);

void ten11()
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
	display(array);
	printf("*********doubling*********");
	double_it(array);
	printf("***********new************\n");
	display(array);
}

void double_it(int (*ar)[ROW])
{
	for(int i=0;i<COL;i++)
	{
		for(int j=0;j<ROW;j++)
		{
			ar[i][j]*=2;
		}
	}
}

void display(int (*ar)[ROW])
{
	for(int i=0;i<COL;i++)
	{
		printf("%dth row: ",i);
		for(int j=0;j<ROW;j++)
		{
			printf("%d  ",ar[i][j]);
		}
		printf("\n");
	}
}












