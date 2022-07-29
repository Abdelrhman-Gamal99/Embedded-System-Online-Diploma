/*
 * main.c
 *
 *  Created on: 29 July 2022
 *      Author: Abdelrhman
 */

#include "stdio.h"
int main()
{
	char c ;
	printf("Enter a character: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &c);
	if( (c >= 'A' && c <='Z') || (c >= 'a' && c <='z') )
	{
		printf("%c is an alphabet" , c) ;
	}
	else
	{
		printf("%c is not an alphabet" , c) ;
	}
	return 0 ;
}
