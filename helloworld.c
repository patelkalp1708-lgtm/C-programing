#include <stdio.h>
int main()
{
    float a, b;
    char ch;

    printf("Enter value of a and b ");
    scanf("%f%f", &a, &b);
    printf("Enter operator ");
    scanf("%s", &ch);
    switch (ch)
    {
    case '+':
        printf("answer is %.2f", a + b);
        break;
    case '-':
        printf("answer is %.2f", a - b);
        break;
    case '*':
        printf("answer is %.2f", a * b);
        break;
    case '/':
        printf("answer is %.2f", a / b);
        break;
    default:
        printf("Wrong choice");
    }
}