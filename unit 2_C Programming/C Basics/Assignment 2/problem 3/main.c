/*
 * main.c
 *
 *  Created on: 29 July 2022
 *      Author: Abdelrhman
 */

#include "stdio.h"
int main()
{
	float Num1 = 0 ;
	float Num2 = 0 ;
	float Num3 = 0 ;
	float largest_Num = 0 ;
	printf("Enter three numbers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f %f", &Num1 ,&Num2 ,&Num3 );
	largest_Num = Num1 > Num2 ? Num1 : Num2 ;
	largest_Num = Num3 > largest_Num ? Num3 : largest_Num ;
	printf("Largest number = %0.2f",largest_Num);
	return 0 ;
}
