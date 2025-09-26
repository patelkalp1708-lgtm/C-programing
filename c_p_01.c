/*
 Genreic C code snippet
    Description: Count the occurrences of the digit '1' in numbers from 1 to 100
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, count = 0;

    for (int i = 1; i <= 100; i++)
    {
        n = i;
        while (n > 0)
        {
            if (n % 10 == 1)
            {
                count++;
            }
            n = n / 10;
        }
    }
    printf("%d\n", count);
}