#include<stdio.h>
int main(void)
{
    int m, a, b;

    printf("Please enter three integers to annalys if they satisfy the Congruence theorem:\n");
    scanf("%d%d%d", &a, &b, &m);
    if((a-b)%m==0)
        printf("integer %d and %d to module %d are congruential", a, b, m);
    else
        printf("integer %d and %d to module %d are not congruential", a, b, m);
    
    return 0;
}
