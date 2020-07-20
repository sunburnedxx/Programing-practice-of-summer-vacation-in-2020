#include<stdio.h>
long mod (long a,long b,long m)
{
    
    if(!b)
        return 1;
    if(b==1)
        return a % m;
    long ans = mod(a, b / 2, m);
    ans = ans * ans % m;             //返回值ans代表a的b/2次方
    if(b&1)
        ans = ans * a % m;           //b为奇数的处理情况
    return ans;                      //ans为a的b次方对m取模
}
int main(void)
{
    long a, b, m,ans;
    printf("Please enter three integers:\n");
    scanf("%l%l%d", &a, &b, &m);
    ans = mod(a, b, m);
    printf("%.2d^%.2d mod %.2d = %.2d",a,b,m,ans);

    return 0;
}
