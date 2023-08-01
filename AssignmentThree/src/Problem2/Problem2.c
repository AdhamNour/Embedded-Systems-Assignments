/*
 * Problem1.c
 *
 *  Created on: Aug 1, 2023
 *      Author: adham
 */


#include "Problem2.h"
#include <stdio.h>

char toLower(char x){
	if(x>='a'&&x<='z')return x;
	if(x>='A'&&x<='Z') return x+('a'-'A');
	return x;
}

int containsDublicate(char* strt){
	int charCount['z'-'a']={0};
	while(*strt !='\0'){
		char  x = toLower(*strt);
		if(charCount[x-'a']!=0) return 1;
		charCount[x-'a']++;
		strt++;
	}
	return 0;
}
