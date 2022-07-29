/*
 * main.c
 *
 *  Created on: 29 July 2022
 *      Author: Abdelrhman
 */

#include "stdio.h"
int main()
{
	char x = 0  ;
	printf("Enter a character: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &x);
	printf("ASCII value of %c = %d ", x , x );
	return 0 ;
}
