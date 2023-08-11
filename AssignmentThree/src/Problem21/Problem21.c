/*
 * Problem12.c
 *
 *  Created on: Aug 6, 2023
 *      Author: adham
 */

#include "Problem21.h"
#include<stdlib.h>

int* generate_numbers_inclusive(int lower_value, int upper_value, int *arr_size) {
	*arr_size = upper_value - lower_value + 1;
	int *result = malloc((upper_value - lower_value + 1) * sizeof(int));
	//	printf("Hello there");
	for (int i = upper_value; i >= lower_value; i--) {
		result[upper_value - i] = i;
		//		printf("Adham Nour : result[upper_value-i] =%d",result[upper_value-i]);
	}
	return result;
}
