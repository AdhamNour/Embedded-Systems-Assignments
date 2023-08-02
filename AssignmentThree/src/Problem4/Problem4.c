/*
 * Problem4.c
 *
 *  Created on: Aug 2, 2023
 *      Author: adham
 */

#include "Problem4.h"
#include "../utils/utils.h"

void selection_sort(int* arr,int size){
	int minimumIndex ;
	for(int i = 0;i<size;i++){
		minimumIndex =i;
		for(int j=i;j<size;j++){
			if(arr[j]<arr[minimumIndex]){
				minimumIndex=j;
			}
		}
		if(minimumIndex != i) swap(&arr[i],&arr[minimumIndex]);
	}
}
