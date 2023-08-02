/*
 * Problem13.c
 *
 *  Created on: Aug 2, 2023
 *      Author: adham
 */

#include "Problem14.h"

#include <stdio.h>

void reverseString(char *str) {
	unsigned int legth = 0;
	char *counterString = str;
	while (*counterString != '\0') {
		legth++;
		counterString++;
	}
	counterString = str;
	for (int i = 0; i < legth / 2; ++i) {
		counterString[i] = counterString[i] ^ counterString[legth - i - 1];
		counterString[legth - i - 1] = counterString[i]
				^ counterString[legth - i - 1];
		counterString[i] = counterString[i] ^ counterString[legth - i - 1];
	}
}
