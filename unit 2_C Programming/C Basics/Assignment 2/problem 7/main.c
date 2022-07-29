/*
 * main.c
 *
 *  Created on: 29 July 2022
 *      Author: Abdelrhman
 */

#include "stdio.h"
int main()
{
	int Num = 0 ;
	int factorial = 1 ;
	int i ;
	printf("Enter an integer: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &Num);
	if( Num == 0 )
	{
	factorial = 1 ;
	printf("Factorial = 1");
	}
	else if (Num > 0)
	{
		for(i=1 ; i <= Num ; i++)
		{
			factorial = factorial * i ;
		}
		printf("Factorial = %d", factorial ) ;
	}
	else
	{
		printf("Error!!! Factorial of negative number doesn't exist") ;
	}
	return 0 ;
}
