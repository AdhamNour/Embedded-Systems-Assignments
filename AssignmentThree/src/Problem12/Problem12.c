/*
 * Problem12.c
 *
 *  Created on: Aug 2, 2023
 *      Author: adham
 */


#include "Problem12.h"

int len(char *str){
	int counter = 0;
	while(*str != '\0'){
		counter++;
		str++;
	}
	return counter;
}
