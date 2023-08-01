/*
 * Problem3.c
 *
 *  Created on: Aug 1, 2023
 *      Author: adham
 */


#include "Problem3.h"
#include "../utils/utils.h"


void bubble_sort(const int* p,int size){
    int i, j;
    int swapped;
    for (i = 0; i < size - 1; i++) {
        swapped = 0;
        for (j = 0; j < size - i - 1; j++) {
            if (p[j] > p[j + 1]) {
                swap(&p[j], &p[j + 1]);
                swapped = 1;
            }
        }

        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == 0)
            break;
    }
}
