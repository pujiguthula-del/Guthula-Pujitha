#include<stdio.h>
int main()
{
    int n,t,r,s;
    scanf("%d",&n);
    s=n*n;
    while (s!=0)
    {
        r=s%10;
        s=s/10;
        t=t+r;
    }
    if (t==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}
