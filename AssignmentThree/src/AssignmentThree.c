/*
 ============================================================================
 Name        : AssignmentThree.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

#include "utils/utils.h"
#include "Problem1/Problem1.h"
#include "Problem2/Problem2.h"
#include "Problem3/Problem3.h"
#include "Problem4/Problem4.h"

int main(void) {
	//testing the first problem
	int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int res = summation(10, numbers);
	printf("this si the result of the problem 1:\t%d\n", res);
	//Testing Problem two
	char problem2_Test[] = "Duck";
	printf("The problem_2_test string contains Duplicates : %d\n",
			containsDublicate(problem2_Test));
	//Testing the bubble sort
	puts("Testing the bubble sort");
	int x[6] = { 6, 5, 4, 3, 2, 1 };
	print_array_int(x, 6);
	bubble_sort(x, 6);
	print_array_int(x, 6);

	puts("Testing the selection sorter");
	int y[6] = { 6, 5, 4, 3, 2, 1 };
	print_array_int(y, 6);
	selection_sort(y, 6);
	print_array_int(y, 6);

	return 0;
}
