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
#include <vector>
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
vector<int> getPrimes(int n)
{
	vector<int> finalPrimes;
	int max = 1000000; 
	int count =0; 
	int stop = n; 
	int primes[max]; //create an array of the size of the number from the user input
	//for loop used to set all the values to 'true' aka the value 1 
	for(int i = 0; i < max+1; i++)
	{
		primes[i] = 1; 
	}

	//set the first two values to 'false' aka 0 since they are not primes
	for(int i = 0; i < 2; i++)
	{
		primes[i] = 0; 
	}

	for(int i = 2; i < n; i++) //starting from 2 since 2 is a prime number 
	{
		if(primes[i] == 1) //if the prime number is currently true then 
		{
			for(int j = pow(i,2); j <=max+1; j = j+i) //set j to value of i to the power of 2. This will calculate the j which is the next number which is not prime
			{
				primes[j] = 0; //set the prime to be false aka
			} 
		}
	}


	for(int i = 0; i< max+1; i++)
	{
		if(primes[i]==1)
		{
			if(stop == 0)
			{
				break; 
			}
			printf("%d\n",i); 
			stop--; 
			finalPrimes.push_back(i); 
			count++;
			printf("%d\n",count); 
		}
	}	
		return finalPrimes; 
}



#endif
