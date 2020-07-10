#include<stdio.h> 
int gcd(int a,int b)
{
    int divident, divisor, reminder;
    divident = a > b ? a : b;
    divisor = a > b ? b : a;
    reminder = divident % divisor;

    while(reminder!=0)
    {
        divident = divisor;
        divisor = reminder;
        reminder = divident % divisor;
    }
    return divisor;
}

int main(void)
{
    int a, b;

    printf("Enter two integers:\n");
    scanf("%d%d", &a, &b);
    printf("The greatest common divisor of %d and %d is %d",a,b,gcd(a,b));

    return 0;
}