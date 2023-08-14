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

#include"Problem10/Problem10.h"

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

	int xx =4,yy=10;
	int *x_ptr=&xx;
	int *y_ptr=&yy;

	printf("the content of x_ptr is %d and it is located at %p\n",*x_ptr,x_ptr);
	printf("the content of y_ptr is %d and it is located at %p\n",*y_ptr,y_ptr);

	swap_pointer(&x_ptr,&y_ptr);

	printf("the content of x_ptr is %d and it is located at %p\n",*x_ptr,x_ptr);
	printf("the content of y_ptr is %d and it is located at %p\n",*y_ptr,y_ptr);

	return EXIT_SUCCESS;
}
