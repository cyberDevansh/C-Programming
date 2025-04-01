#include <stdio.h>
#include <conio.h>
int main()
{
    // printing prime numbers from 1 to 100 
    int num, i, isPrime;

    printf("Prime numbers between 1 and 100 are:\n");

    for (num = 2; num <= 100; num++)
    {                // Loop through numbers 2 to 100
        isPrime = 1; // Assume the number is prime

        for (i = 2; i <= num / 2; i++) // Check for factors
        {
            if (num % i == 0)
            {
                isPrime = 0; // Not a prime number
                break;       // Exit the loop
            }
        }

        if (isPrime == 1)
        {                        // If the number is prime
            printf("%d\t", num); // Print the prime number
        }
    }

    return 0;
}
