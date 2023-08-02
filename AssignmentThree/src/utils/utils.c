/*
 * utils.c
 *
 *  Created on: Aug 1, 2023
 *      Author: adham
 */


#include "utils.h"

void swap (int* a,int *b){
	int temp =*a;
	*a=*b;
	*b=temp;
}

void print_array_int(int* a,int b){
	printf("{");
	for (int i =0 ; i<b;i++) printf("%d ",a[i]);
	printf("}\n");
}
