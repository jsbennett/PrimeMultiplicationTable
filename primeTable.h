/*****************************************************************
* Jay Bennett 												     *
* 29/01/17													     *
* Purpose: This header file is used to contain the logic for     *
*		   finding primes and producing the multiplication table *
******************************************************************/

#ifndef PRIME_TABLE
#define PRIME_TABLE

#include <stdio.h>
#include <ctype.h>
#include <math.h>

/*
* method to get and verify user input
*/ 
int getInput()
{
	int n; //create a variable to store user input 
	do
	{
		n = 0;
		printf("Please enter a whole positive integer starting from 1:\n"); //ask for input 
		
		scanf("%d", &n);  //get user input
		
	} while (n < 1); //keep asking the user until the input is valid 

	return ceil(n); //return the round up number if the user puts in not a whole number 
}


#endif