/*
 ============================================================================
 Name        : PrintBinary.c
 Author      : AdhamNour
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void print_bin(unsigned int num){
	unsigned char numOf1 =0;
	unsigned char numOf0 =0;
	printf("the binary representation of %d:\t",num);
	for (unsigned int mask = 0x80000000; mask != 0; mask>>=1) {
		if(num&mask){
			numOf1++;
			printf("1");
		}
		else{
			numOf0++;
						printf("0");
		}
	}
	printf("\n the number of ones in %d :\t %d",num,numOf1);
	printf("\n the number of zeros in %d :\t %d",num,numOf0);

}


int main(void) {
	print_bin(255);
}
