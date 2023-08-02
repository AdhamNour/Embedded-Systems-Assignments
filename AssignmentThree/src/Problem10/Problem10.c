/*
 * Problem10.c
 *
 *  Created on: Aug 2, 2023
 *      Author: adham
 */




#include "Problem10.h"
#include "../utils/utils.h"

void lowerString(char* str,int len){
	for(int i=0;i<len;i++) toUpper(str+i);
}
