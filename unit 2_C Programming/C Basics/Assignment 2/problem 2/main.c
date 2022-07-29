/*
 * main.c
 *
 *  Created on: 29 July 2022
 *      Author: Abdelrhman
 */

#include "stdio.h"
int main()
{
	char Alphabet ;
	printf("Enter an alphabet: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &Alphabet);

	switch ( Alphabet )
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
	printf("%c is a vowel" , Alphabet);
	break;
	default:
	printf("%c is a consonant" , Alphabet);
	}

	return 0 ;
}
