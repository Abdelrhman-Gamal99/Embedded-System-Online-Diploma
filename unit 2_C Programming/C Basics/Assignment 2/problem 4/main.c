/*
 * main.c
 *
 *  Created on: 29 July 2022
 *      Author: Abdelrhman
 */

#include "stdio.h"
int main()
{
	float Num = 0  ;
	printf("Enter a number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &Num);
	if( Num > 0 )
	{
		printf("%0.2f is positive" , Num) ;
	}
	else if ( Num < 0)
	{
		printf("%0.2f is negative" , Num) ;
	}
	else if (Num == 0)
	{
		printf("You entered zero") ;
	}
	else
	{
		printf("Invalid Input");
	}
	return 0 ;
}
