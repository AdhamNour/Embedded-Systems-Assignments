/*
 * Problem3.c
 *
 *  Created on: Aug 11, 2023
 *      Author: adham
 */


#include"Problem3.h"
#include"../utils/utils.h"

void reverse_arr(int* arr, int arr_size){
	for(int i=0;2*i<arr_size;i++){
		swap(arr+i,arr+(arr_size-i-1));
	}
}
