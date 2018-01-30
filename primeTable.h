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
* method to get and verify user
*/ 
int getInput()
{
	int n; //create a variable to store user input 
	do
	{
		n = 0;
		printf("Please enter a whole positive integer starting from 2:\n"); //ask for input 
		
		scanf("%d", &n);  //get user input

		
	} while (n < 2); //keep asking the user until the input is valid 

	return ceil(n); //return the round up number if the user puts in not a whole number 
}

/*
*method to calculate the primes using the sieve of Erathosthenes (https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes) 
*/
void getPrimes(int n)
{
	int primes[n]; //create an array of the size of the number from the user input
	//for loop used to set all the values to 'true' aka the value 1 
	for(int i = 0; i< n; i++)
	{
		primes[i] = 1; 
	}

}

#endif