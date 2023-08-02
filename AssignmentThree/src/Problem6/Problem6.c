/*
 * Problem6.c
 *
 *  Created on: Aug 2, 2023
 *      Author: adham
 */

int last_occurance_linear_search(int *a, int size, int search_target) {
	for (int i = size - 1; i >= 0; i++)
		if (a[i] == search_target)
			return i;
	return -1;
}
