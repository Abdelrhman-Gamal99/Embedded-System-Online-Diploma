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
	int sum = 0 ;
	int i ;
	printf("Enter an integer: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &Num);
	if (Num > 0)
	{
		for(i=1 ; i <= Num ; i++)
		{
			sum =sum + i ;
		}
		printf("Sum = %d", sum ) ;
	}
	else
	{
	printf("invalid input") ;
	}
	return 0 ;
}
