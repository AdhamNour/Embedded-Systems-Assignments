#include<stdio.h>

int main(int argc, char **argv) {
	int num1=0,num2=0;
	scanf("%d",&num1);
	scanf("%d",&num2);
	int result = ((num1 + num2) * 3) - 10;
	printf("The result of the Computation is %d",result);
	return 0;
}