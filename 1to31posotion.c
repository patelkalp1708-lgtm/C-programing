#include <stdio.h>
int main()
{
    for (int i = 1; i <= 31; i++)
    {
        if (i % 10 <= 1 && i <= 1 || i == 21 || i == 31)
        {
            printf("%dst\n", i);
        }
        else if (i % 10 == 2 && i <= 2 || i == 22)
        {
            printf("%dnd\n", i);
        }
        else if (i % 10 == 3 && i <= 3 || i == 23)
        {
            printf("%drd\n", i);
        }
        else
            printf("%dth\n", i);
    }
    return 0;
}