/*
 * Problem10.c
 *
 *  Created on: Aug 2, 2023
 *      Author: adham
 */




int fib_while(int n){
	int x=0,y=1,i=0,tmp;
	while(i<n){
		tmp=x+y;
		x=y;
		y=tmp;
		i++;
	}
	return y;
}

int fib_rec(int n){
	if(0==n||1==n) return 1;
	return fib_rec(n-1)+fib_rec(n-2);
}
