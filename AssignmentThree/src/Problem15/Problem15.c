/*
 * Problem15.c
 *
 *  Created on: Aug 5, 2023
 *      Author: adham
 */


#include "Problem15.h"

void string_concat(char *res,char* str){
	char* endResPointer = res;
	while(*endResPointer != '\0') endResPointer++;
	char * strCurrPtd =str;
	while (* strCurrPtd!='\0'){
		*endResPointer=*strCurrPtd;
		strCurrPtd++;
		endResPointer++;
	}
}
