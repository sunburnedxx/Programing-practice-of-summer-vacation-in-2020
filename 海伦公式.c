#include<stdio.h>
#include<math.h>
int main(void)
{
    double a[3], b[3],c[3],p,s;
    int i;
    printf("Enter the corordinates of three points:\n");
    for (i = 0; i < 3;i++)
    {
        printf("No.%d(x,y):", i + 1);
        scanf("%d%d", &a[i], &b[i]);
    }
    printf("The lengths of each side are:\n");
    c[0] = sqrt(pow((a[0] - a[1]),2) + pow((b[0] - b[1]),2));
    c[1]=sqrt(pow((a[2] - a[1]),2) + pow((b[2] - b[1]),2));
    c[2]=sqrt(pow((a[2] - a[3]),2) + pow((b[2] - b[3]),2));
    for (i = 0; i < 3;i++)
    {
        printf("%.2f ", c[i]);
    }
    p = (c[0] + c[1] + c[2]) / 2;
    s = sqrt(p * (p - c[0]) * (p - c[1]) * (p - c[2]));
    printf("The area of the triangle is %.2f", s);
}
