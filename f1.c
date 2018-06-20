#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){

	int a=1;
	printf("%d%d%d",++a,++a,++a);
	//this is a code to check a preincrement operation
}

void feature1(){

	#ifndef NULL
		printf("NULL is succesfully defined\n");
	#endif
	#if NULL
		printf("NULL already defined");
	#endif
