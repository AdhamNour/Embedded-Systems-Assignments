#include "Problem5.h"
int first_occurance_linear_search(int *a, int size, int search_target) {
	for (int i = 0; i < size; i++)
		if (a[i] == search_target)
			return i;
	return -1;
}
