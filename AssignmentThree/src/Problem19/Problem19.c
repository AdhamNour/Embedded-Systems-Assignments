/*
 * Problem19.c
 *
 *  Created on: Aug 5, 2023
 *      Author: adham
 */

int isArraysIdentical(int *a, int a_size, int *b, int b_size) {
	if (a_size != b_size)
		return 1;
	for (int i = 0; i < a_size; i++)
		if (a[i] != b[i])
			return 1;
	return 0;
}
