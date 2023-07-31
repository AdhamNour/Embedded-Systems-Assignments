/*
 ============================================================================
 Name        : Tempreture.c
 Author      : AdhamNour
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int boilerTimeUp(int boilerTempreture){
	if(boilerTempreture>=0 && boilerTempreture<=30) return 7;
	if(boilerTempreture>=30&&boilerTempreture<=60) return 5;
	if(boilerTempreture>=60&&boilerTempreture<=90) return 3;
	if(boilerTempreture>=90&&boilerTempreture<=100) return 1;
	return 0;
}

int main(void) {
	printf("tempreture =%d => time = %d minute\n",5,boilerTimeUp(5));
	printf("tempreture =%d => time = %d minutes\n",30,boilerTimeUp(30));
	printf("tempreture =%d => time = %d minutes\n",40,boilerTimeUp(40));
	printf("tempreture =%d => time = %d minutes\n",70,boilerTimeUp(70));
	printf("tempreture =%d => time = %d minutes\n",100,boilerTimeUp(100));
	printf("tempreture =%d => time = %d minutes\n",101,boilerTimeUp(101));



}
