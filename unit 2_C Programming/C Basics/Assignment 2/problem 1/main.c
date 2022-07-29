/*
 * main.c
 *
 *  Created on: 29 July 2022
 *      Author: Abdelrhman
 */

#include "stdio.h"
int main()
{
	int Num = 0  ;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &Num);

	if( Num % 2 == 0 )
	{
		printf("%d is even" , Num) ;
	}
	else
	{
		printf("%d is odd" , Num) ;
	}

	return 0 ;
}
