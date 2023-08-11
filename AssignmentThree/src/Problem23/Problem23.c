/*
 * Problem23.c
 *
 *  Created on: Aug 6, 2023
 *      Author: adham
 */

#include "Problem23.h"
#include <stdio.h>
void findFreq(char *str, int length) {
	int i;
	unsigned int x[256] = { 0 };
	for (i = 0; i < length; i++)
		x[str[i]]++;
	for (i = 0; i < 256; i++)
		if (x[i] != 0)
			printf("%c\t=>\t%d\n", i, x[i]);
}
