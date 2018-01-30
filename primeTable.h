/*****************************************************************
* Jay Bennett 												     *
* 29/01/17													     *
* Purpose: This header file is used to contain the logic for     *
*		   finding primes and producing the multiplication table *
******************************************************************/

#ifndef PRIME_TABLE
#define PRIME_TABLE

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

/*
* method to get and verify user
*/ 
int getInput()
{
	int n; //create a variable to store user input 
	do
	{
		n = 0;
		cout << "Please enter a whole positive integer starting from 2:\n"; //ask for input 
		
		cin>>n;  //get user input

		
	} while (n < 2 && cin.fail()); //keep asking the user until the input is valid 

	return ceil(n); //return the round up number if the user puts in not a whole number 
}

/*
*method to calculate the primes using the sieve of Erathosthenes (https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes) 
*/
void getPrimes(int n)
{
	int primes[n]; //create an array of the size of the number from the user input
	//for loop used to set all the values to 'true' aka the value 1 
	for(int i = 0; i < n; i++)
	{
		primes[i] = 1; 
	}

	//set the first two values to 'false' aka 0 since they are not primes
	for(int i = 0; i < 1; i++)
	{
		primes[i] = 0; 
	}

	for(int i = 1; i < n; i++) //starting from 2 since 2 is a prime number 
	{
		if(primes[i] == 1) //if the prime number is currently true then 
		{
			for(int j = i*2; j < n; j =  i)
			{
				primes[j] = 0; 
			} //
		}
	}
	for(int i = 0; i< n; i++)
	{
		printf("%d\n",primes[i]); 
	}

}

#endif