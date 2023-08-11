/*
 * Problem24.c
 *
 *  Created on: Aug 11, 2023
 *      Author: adham
 */


#include <limits.h>

#include "Problem24.h"

int findTheSecondLargestNumber(int* arr,int arr_size){
	int largestElement = INT_MIN,secondLargestElement=INT_MIN,n=0;
	do {
		if(arr[n]>largestElement){
			secondLargestElement=largestElement;
			largestElement=arr[n];
		}
		n++;
	} while (n<arr_size);
	return secondLargestElement;
}
