#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int reverse_sum(long long n, long long rev)
{
    if (n == 0)
        return rev;
    rev = (rev * 10) + (n % 10);
    return reverse_sum(n / 10, rev);
}
long long int sub_digit(long long n, long long rev, int y)
{
    int total = 0;
    while (y > total)
    {

        rev = (rev * 10) + (n % 10);
        total += n % 10;
        n = n / 10;
        if (n == 0)
        {
            return 0;
        }
    }
    return rev;
}

int main()
{
    long long int n;
    int x, z = 0, y, a = 0;
    printf("Enter a number: ");
    scanf("%lld", &n);
    printf("Enter sum of digits:\n");
    scanf("%d", &y);
    long long int reverse = reverse_sum(n, 0);
    printf("reverse %lld\n", reverse);
    long long int subdigit = sub_digit(reverse, 0, y);
    printf("sub digits: %lld\n", subdigit);
}