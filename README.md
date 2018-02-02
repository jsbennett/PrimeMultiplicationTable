# PrimeMultiplicationTable
Repository for the development of a program which take in a number from the user and produces a multiplication table of prime numbers


To run: 
Please download both main.cpp and primeTable.h
In the terminal, navigate to where these two files are stored. 
Then use the command 'g++ main.cpp -o primeTable' to compile the program 
Then use the command './primeTable'
You will be advised to enter a number. 
Enter a number and then it will produce a prime multiplication table. 
It will save the multiplication under a file name called 'numberEntered'PrimeTable.txt


What I am pleased with:
I am pleased that I was able to produce a prime generating algorithm that was not brute force. I found this to be the hardest challenge that I overcame and was proud that I managed it. 

What I would do if I had more time:
If I had more time I would have found a way to overcome the bug where if the user input is letters then the program loops infinitely. 

I would also have implemented a way to generate more primes. Since the number of primes is limited to the amount of RAM, during testing only 46,349 primes could be generated at any one time. To over come this I would do 10,000 at a time, write the result to file and do the process again until the number of primes required was fulfilled. This would mean an array of all the primes would not be taking up all of the RAM and produce segmentation faults. 

Furthermore, I would have implemented my version in another language such as javascript and implemented a version through html. 

Thank you for taking the time to review my solution and any feedback would be greatly appreciated. 
