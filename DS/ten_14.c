#include <stdio.h>
#include "rand0.h"
#include "ten_11.h"
#define MAX 100
void doubling(int col,int row,int array[col][row]);
void display_1(int col,int row,int ar[col][row]);
void test_vla()
{
	int col=3,row=5;
	int array[col][row];
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
		{
			array[i][j]=random(MAX);
		}
	}
	display_1(col,row,array);
	doubling(col,row,array);
	display_1(col,row,array);
}

void doubling(int col,int row,int array[col][row])
{
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
		{
			array[i][j]*=2;
		}
	}
}

void display_1(int col,int row,int ar[col][row])
{
	for(int i=0;i<col;i++)
	{
		printf("%dth row: ",i);
		for(int j=0;j<row;j++)
		{
			printf("%d  ",ar[i][j]);
		}
		printf("\n");
	}
}
