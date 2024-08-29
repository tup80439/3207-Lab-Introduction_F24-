//#include "random.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>


char randchar()
{
	int rd_num = rand() % (90 - 65 + 1) + 65;
	return rd_num;	
}
