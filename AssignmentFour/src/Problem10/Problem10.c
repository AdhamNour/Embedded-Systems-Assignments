/*
 * Problem10.c
 *
 *  Created on: Aug 14, 2023
 *      Author: adham
 */


void swap_pointer(int** x,int**y){
	int* temp =*x;
	*x=*y;
	*y=temp;

}
