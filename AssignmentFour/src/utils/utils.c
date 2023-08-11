/*
 * utils.c
 *
 *  Created on: Aug 1, 2023
 *      Author: adham
 */

#include "utils.h"

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void print_array_int(int *a, int b) {
	printf("{");
	for (int i = 0; i < b; i++)
		printf("%d ", a[i]);
	printf("}\n");
}

int isAlpha(char x) {
	if (x >= 'a' && x <= 'z')
		return 1;
	if (x >= 'A' && x <= 'Z')
		return 1;
	return 0;
}

void toLower(char *x) {
	*x = *x + ('A' - 'a');
}

void toUpper(char *x) {
	*x = *x + ('A' - 'a');
}
int isLower(char x) {
	if (x >= 'a' && x <= 'z')
		return 1;
	return 0;

}
int isUpper(char x) {
	if (x >= 'A' && x <= 'Z')
		return 1;
	return 0;
}
