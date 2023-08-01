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

#include "Problem1/Problem1.h"

int main(void) {
	//testing the first problem
	int numbers[10] = {1,2,3,4,5,6,7,8,9};
	int res =summation(10,numbers);
	printf("this si the result of the problem 1:\t%d\n",res);
	return 0;
}
