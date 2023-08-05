/*
 * Problem18.c
 *
 *  Created on: Aug 5, 2023
 *      Author: adham
 */

int findMaxConsecutive(int *arr, int arr_size, int search_target) {
	int globalMax = 0;
	int localMax = 0;
	for (int i = 0; i < arr_size; i++) {
		if (arr[i] == search_target) {
			localMax++;
		} else {
			if (localMax > globalMax) {
				globalMax = localMax;
			}
			localMax = 0;
		}

	}
	return globalMax;
}
