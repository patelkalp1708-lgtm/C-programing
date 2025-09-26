/*
Write a C program to count the occurrences of a given digit in a number.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long int n;
    int count = 0, y;
    printf("Enter a number: ");
    scanf("%lld", &n);
    printf("Find a digit : ");
    scanf("%d", &y);
    printf("Counting occurrences of n: %lld\n", n);
    {
        while (n > 0)
        {

            if (n % 10 == y)
            {

                count++;
            }
            n = n / 10;
        }
        printf("Your number is :%d\n", count);
    }

    return 0;
}