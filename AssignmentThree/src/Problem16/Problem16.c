/*
 * Problem16.c
 *
 *  Created on: Aug 5, 2023
 *      Author: adham
 */


void reverse(int* arr,int size){
	int temp;
	for(int i = 0;2*i<size;i++){
		temp = arr[i];
		arr[i] = arr[size-i-1];
		arr[size-i-1]=arr[i];
	}
}
