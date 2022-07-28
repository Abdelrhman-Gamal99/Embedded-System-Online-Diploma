/*
 * main.c
 *
 *  Created on: 28 July 2022
 *      Author: Abdelrhman
 */

/*Assignment 1_Problem 4
* C Program to Multiply two Floating Point Numbers
*/

#include "stdio.h"
int main()
{
	float Num1 = 0 ;
	float Num2 = 0 ;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f" , &Num1 , &Num2);
	printf("Product: %f", ( Num1 * Num2 ) );
	return 0 ;
}
