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
#include <stdlib.h>
#include <strings.h>

#include "utils/utils.h"
#include "Problem1/Problem1.h"
#include "Problem2/Problem2.h"
#include "Problem3/Problem3.h"
#include "Problem4/Problem4.h"

#include "Problem11/Problem11.h"
#include "Problem12/Problem12.h"
#include "Problem14/Problem14.h"
#include "Problem15/Problem15.h"
#include "Problem15/Problem15.h"

#include "Problem17/Problem17.h"
#include "Problem18/Problem18.h"

#include "Problem20/Problem20.h"
#include "Problem21/Problem21.h"

#include "Problem23/Problem23.h"
#include "Problem24/Problem24.h"

int main(void) {
	//testing the first problem
//	int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int res = summation(10, numbers);
//	printf("this si the result of the problem 1:\t%d\n", res);
//	//Testing Problem two
//	char problem2_Test[] = "Duck";
//	printf("The problem_2_test string contains Duplicates : %d\n",
//			containsDublicate(problem2_Test));
//	//Testing the bubble sort
//	puts("Testing the bubble sort");
//	int x[6] = { 6, 5, 4, 3, 2, 1 };
//	print_array_int(x, 6);
//	bubble_sort(x, 6);
//	print_array_int(x, 6);
//
//	puts("Testing the selection sorter");
//	int y[6] = { 6, 5, 4, 3, 2, 1 };
//	print_array_int(y, 6);
//	selection_sort(y, 6);
//	print_array_int(y, 6);
//
//	//Testing Ptoblem 11;
//	char myString[] = "Embbedded Systems is Awesome;";
//	char *myStringPtr = myString;
//	while (*myStringPtr != '\0') {
//		printf("Character '%c' is has the frequency = %d\n", *myStringPtr,
//				frequancyCoutner(myString, *myStringPtr));
//		myStringPtr++;
//	}
//	printf("the lenth of myStr is %d\n", len(myString));
//	puts(myString);
//	reverseString(myString);
//	puts(myString);
//	reverseString(myString);
//	puts(myString);
//
//	char result[150] = "My Opnion is:";
//	puts(result);
//	string_concat(result, myString);
//	puts(result);
//
//	print_array_int(y, 6);
//	reverse(y, 6);
//	print_array_int(y, 6);
//
//	int alpha[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 2 };
//	int beta[5] = { 4, 1, 8, 3, 155 };
//	printf("alpha: ");
//	print_array_int(alpha, 10);
//	printf("beta: ");
//	print_array_int(beta, 5);
//	Swap(10, alpha, 5, beta);
//	printf("alpha: ");
//	print_array_int(alpha, 10);
//	printf("beta: ");
//	print_array_int(beta, 5);
//
//	int consigative[14] = { 1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3 };
//	printf("the number of consigative %d is %d\n", 3,
//			findMaxConsecutive(consigative, 14, 3));
//
//	int lowerValue = 9, upperValue = 20, arr_size;
//	int *rangee = genereate_numbers(lowerValue, upperValue, &arr_size);
//	if (rangee != NULL)
//		print_array_int(rangee, arr_size);
//	else
//		printf("THere is some wierdo error");
//	free(rangee);
//	rangee = generate_numbers_inclusive(lowerValue, upperValue, &arr_size);
//	if (rangee != NULL)
//		print_array_int(rangee, arr_size);
//	else
//		printf("THere is some wierdo error");
//	free(rangee);

//	char problem23_String[]= "Adham Nour is going to be an Embedded Systems Engineer in Valeo or Ejad";
//	printf("the length of the target string is %d\n",strlen(problem23_String));
//	findFreq(problem23_String,strlen(problem23_String));

	int arr[]={1,2,3,3,3,4,4,5,5,5};
	int res=findTheSecondLargestNumber(arr,10);
	printf("the second largest number %d\n",res);

	return 0;
}
