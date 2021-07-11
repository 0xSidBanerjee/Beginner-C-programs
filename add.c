#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter the value of first number: ");
    scanf("%d", &a);
    printf("Enter the value of second number: ");
    scanf("%d", &b);
    sum=a+b;
    printf("The sum of %d and %d is %d", a, b, sum);
    return 0;
}
