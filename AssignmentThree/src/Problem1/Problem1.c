/*
 * Problem1.c
 *
 *  Created on: Aug 1, 2023
 *      Author: adham
 */

#include "Problem1.h"
int summation (int numbers_size, int* numbers)
{
	int sum = 0;
	for(int i =0 ; i<numbers_size;i++) sum+=numbers[i];
	return sum;
}
