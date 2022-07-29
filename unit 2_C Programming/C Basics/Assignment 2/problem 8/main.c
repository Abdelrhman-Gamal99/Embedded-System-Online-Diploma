/*
 * main.c
 *
 *  Created on: 30 July 2022
 *      Author: Abdelrhman
 */

#include "stdio.h"
int main()
{
	float Num1 = 0 ;
	float Num2 = 0 ;
	char operator  ;
	printf("Enter Operator Either + or - or + or / : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &operator);
	printf("Enter two Operands: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f", &Num1 ,&Num2 );
	switch(operator)
	{
	case '+':
	{
		printf("%0.1f + %0.1f = %0.1f", Num1 ,Num2 ,(Num1 + Num2) );
	}
	break ;
	case '-':
	{
		printf("%0.1f - %0.1f = %0.1f", Num1 ,Num2 ,(Num1 - Num2) );
	}
	break ;
	case '*':
	{
		printf("%0.1f * %0.1f = %0.1f", Num1 ,Num2 ,(Num1 * Num2) );
	}
	break ;
	case '/':
	{
		if(Num2 !=0)
		{
			printf("%0.1f / %0.1f = %0.1f", Num1 ,Num2 ,(Num1 / Num2) );
		}
		else
		{
			printf("Dividing by Zero Is Undefined") ;
		}
	}
	break ;

	default :
	{
		printf("invalid operator");
	}
	break ;
	}
	return 0 ;
}
