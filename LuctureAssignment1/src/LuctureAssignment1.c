/*
 ============================================================================
 Name        : LuctureAssignment1.c
 Author      : AdhamNour
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int squere(int y);

int main(void) {
	printf("The Square of 5 is %d\n",squere(5));
	printf("The Square of 7 is %d\n",squere(7));
	printf("The Square of 9 is %d\n",squere(9));

	return 0;
}

int squere(int y){
	return y*y;
}
