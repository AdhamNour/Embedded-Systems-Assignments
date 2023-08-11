/*
 * Problem20.c
 *
 *  Created on: Aug 6, 2023
 *      Author: adham
 */


#include "Problem20.h"
#include <stdlib.h>
#include <stdio.h>


int* genereate_numbers(int lower_value,int upper_value, int* arr_size){
	upper_value--;
	lower_value++;
	*arr_size=upper_value-lower_value+1;
	int* result = malloc((upper_value-lower_value+1)*sizeof(int));
//	printf("Hello there");
	for(int i =upper_value;i>=lower_value;i--){
		result[upper_value-i]=i;
//		printf("Adham Nour : result[upper_value-i] =%d",result[upper_value-i]);
	}
	return result;

}
