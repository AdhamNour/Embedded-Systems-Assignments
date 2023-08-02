/*
 * Problem8.c
 *
 *  Created on: Aug 2, 2023
 *      Author: adham
 */

int geometricSeriesTerm(int base, int n) {
	int result = 1;
	for (int i = 0; i < n; i++)
		result *= base;
	return result;
}
