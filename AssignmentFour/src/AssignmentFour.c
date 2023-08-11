/*
 ============================================================================
 Name        : AssignmentFour.c
 Author      : Adham Nour
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include"Problem1/Problem1.h"
#include"Problem2/Problem2.h"
#include"Problem3/Problem3.h"


#include "utils/utils.h"

int main(void) {
	int arr[] = { 1, 2, 3 };
	int prp1_res = sum_arr_ptr(arr, 3);
	printf("the result of the 1st problem is %d\n", prp1_res);

	char problem2_String[] =
			"Adham Nour is going to be an Embedded Systems Engineer in Valeo or Ejad";
	printf("the result of the 1st problem is %d\n",
			strlen_ptr(problem2_String));

	int y[6] = { 6, 5, 4, 3, 2, 1 };
	print_array_int(y, 6);
	reverse_arr(y, 6);
	print_array_int(y, 6);

	return EXIT_SUCCESS;
}
