
#include<stdio.h>
int main(void)
{
    double x1, y1, x2, y2;
    char flag;

    printf("Enter the corordinates of two points A and B to analys their direction:\n");
    while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2))
    {
        if((x1*y2-x2*y1)>0)
            printf("AxB>0,A is in the clockwise direction of B\n");
        else if ((x1 * y2 - x2 * y1) < 0)
            printf("AxB<0,A is in the counter clockwise direction of B\n");
        else
            printf("AxB=0,A and B are collinear\n");
        printf("Have you done?(y/n)\n");
        scanf("%d", &flag);
        if(flag=='y')
            break;
    }
    printf("Your work is done!\n");
    return 0;
}
/*原理：叉积可以通过它的符号判断两矢量相互之间的顺逆时针关系：
若 P × Q > 0 , 则P在Q的顺时针方向。
若 P × Q < 0 , 则P在Q的逆时针方向。
若 P × Q = 0 , 则P与Q共线，但可能同向也可能反向。*/