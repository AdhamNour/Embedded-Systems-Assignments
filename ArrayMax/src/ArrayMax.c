/*
 ============================================================================
 Name        : ArrayMax.c
 Author      : AdhamNour
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include<limits.h>
#define ARR_SIZE 4

int main(void) {
	printf("please enter %d numbers",ARR_SIZE);
	int arr[ARR_SIZE];
	for (int i = 0;  i < ARR_SIZE; ++i) {
		scanf("%d",&arr[i]);
	}
	int maximum = INT_MIN;
	for (int i = 0;  i < ARR_SIZE; ++i) {
		if(maximum<arr[i])maximum=arr[i];
		}
	printf("The maximum number = %d",maximum);
	return 0;
}
