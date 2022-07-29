/*
 * main.c
 *
 *  Created on: 28 July 2022
 *      Author: Abdelrhman
 */

#include "stdio.h"
int main()
{
	int Num = 0 ;
	printf("Enter an integer : ");
	fflush(stdout);
	scanf("%d" , &Num);
	printf("you entered : %d",Num);
	return 0 ;
}
