/*********************************************************************
* Jay Bennett 												         *
* 29/01/17													         *
* Purpose: This main file is used to contain the logic for handling  *
*		   user input and controlling the flow of the program        *
**********************************************************************/


#include "primeTable.h"

/*
* Main function for the program 
*/
int main()
{
	int n = getInput(); //get the users input 
	getPrimes(n); //get the primes 
	return 0;  
}