#include<stdio.h>
int main()
{
    int n,a=0,b=1;
    scanf("%d",&n);
    while (n!=0)
    {
        printf("%d ",a);
        n--;
        if (n==0)
        {break;}
        printf("%d ",b);
        if(n==0)
        {break;}
        n--;
        a=a+b;
        b=a+b;
    }
    return 0;
}
