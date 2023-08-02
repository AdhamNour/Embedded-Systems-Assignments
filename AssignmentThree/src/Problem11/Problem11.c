/*
 * Problem11.c
 *
 *  Created on: Aug 2, 2023
 *      Author: adham
 */


int frequancyCoutner(char* str,char counterTerget){
	int charFreq[255]={0};
	while(*str!='\0') {
		charFreq[*str]++;
		str++;
	}
	return charFreq[counterTerget];
}
