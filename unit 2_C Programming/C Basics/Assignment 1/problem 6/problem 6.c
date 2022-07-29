/*
 * main.c
 *
 *  Created on: 29 July 2022
 *      Author: Abdelrhman
 */

#include "stdio.h"
int main()
{
	float a = 0  ;
	float b = 0 ;
	float temp = 0;
	printf("Enter value of a: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &b);
	temp = a ;
	a = b ;
	b = temp ;
	printf("After swapping, value of a = %f \n", a );
	fflush(stdout);
	printf("After swapping, value of b = %f \n", b );
	return 0 ;
}
