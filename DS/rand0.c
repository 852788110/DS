/*rand0.c --produce random numbers*/
#include "rand0.h"
static unsigned long int next =1;

int random(int max)
{
	next=next*110351254+12345;
	return (unsigned int)(next/65536)%max;
}

