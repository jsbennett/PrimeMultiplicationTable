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
#include <iostream>
#include <fstream>
using namespace std;

/*
* method to get and verify user input
*/ 
int getInput()
{
	cout << "Welcome to the prime multiplication table!"; 
	int n; //create a variable to store user input 
	do
	{
		n = 0;
		
		cout << "Please enter a whole positive integer starting from 2:\n"; //ask for input 
		
		cin>>n;  //get user input

		
	} while (n < 2); //keep asking the user until the input is valid 

	return ceil(n); //return the round up number if the user puts in not a whole number 
}

/*
*method to calculate the primes using the sieve of Erathosthenes (https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes) 
*/
vector<int> getPrimes(int n)
{
	vector<int> finalPrimes;
	int max = 1000000;  
	int stop = n; 
	int primes[max]; //create a vector of the size of the number from the user input
	
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
				primes[j] = 0; //set the prime to be false aka 0 
			} 
		}
	}

	//this is used to get n primes 
	for(int i = 0; i< max+1; i++)
	{
		if(primes[i]==1)
		{

			//if we have reached the number of primes required then stop getting primes
			if(stop == 0)
			{
				break; 
			}
			//add the primes to the vector 
			stop--; 
			finalPrimes.push_back(i); 
		}
	}	
		return finalPrimes; 
}

/*
* Method to display the table to the user and also save it in a txt file. 
*/
void printTable(vector<int> primes, int n)
{
	ofstream file; //open the ofstream 
	file.open(to_string(n)+"PrimeTable.txt"); //name the file to be the number the user input 

	cout << "*"<< '|'; 
	file << "*|"; 

	//this is to display the top line of the table
	for(int i = 0; i < primes.size(); i++) 
	{
		cout << '\t' << primes[i];
		file << '\t' << primes[i]; 

	}

	cout << endl; 
	file << endl; 

	//this is to display the dividing line between the multiplication and the top line of numbers 
	for (int i = 0; i < primes.size() + 1; i++)
	{
		cout << " ------\t";  
		file << " ------\t"; 
	}

	long x; //used to store the result of the multiplication 
	
	cout << endl; 
	file << endl; 
	
	//this is used to display the primes down the side of the table 
	for(int i = 0; i < primes.size(); i++) 
	{
		cout << primes[i] << '|' << '\t'; //print out the side primes 
		file << primes[i] << "|\t"; 

		//this is to do the multiplication calculation
		for(int j = 0; j < primes.size(); j++)
		{
			x = primes[i]*primes[j]; //multiply the values from loop i and loop j aka the side value and the top value 
			
			cout << x << '\t';
			file << x << '\t';  
			
			x = 0; //reset x back to  
		} 

		cout << endl; 
		file << endl; 
	}
}

#endif
