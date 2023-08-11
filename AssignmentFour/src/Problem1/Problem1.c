/*
 * Problem1.c
 *
 *  Created on: Aug 11, 2023
 *      Author: adham
 */

int sum_arr_ptr(int *ptr, int arr_size) {
	int sum = 0, i = 0;
	for (i = 0; i < arr_size; i++)
		sum += ptr[i];
	return sum;
}
