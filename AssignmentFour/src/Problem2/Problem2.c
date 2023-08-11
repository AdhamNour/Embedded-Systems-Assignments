/*
 * Problem2.c
 *
 *  Created on: Aug 11, 2023
 *      Author: adham
 */


#include "Problem2.h"

int strlen_ptr(const char* str){
	int count =0;
	while(*str != '\0'){
		count++;
		str++;
	}
	return count;
}
