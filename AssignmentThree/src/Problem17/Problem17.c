/*
 * Problem.c
 *
 *  Created on: Aug 5, 2023
 *      Author: adham
 */
#include <stdio.h>

int * Swap (int a_size,int *a,int b_size,int *b){
	int temp;
	for(int i =0;i<b_size;i++){
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	return a;
}
