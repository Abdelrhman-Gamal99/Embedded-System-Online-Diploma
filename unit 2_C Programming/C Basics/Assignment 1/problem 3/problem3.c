/*
 * main.c
 *
 *  Created on: 28 July 2022
 *      Author: Abdelrhman
 */

#include "stdio.h"
int main()
{
	int Num1 = 0 ;
	int Num2 = 0 ;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d" , &Num1 , &Num2);
	printf("Sum: %d", ( Num1 + Num2 ) );
	return 0 ;
}
