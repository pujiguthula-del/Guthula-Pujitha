#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,m,n,p,q;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
    p=(a<b?(a<c?a:c):(b<c?b:c));
    q=(x<y?(x<z?x:z):(y<z?y:z));
    m=a+b+c-p;
    n=x+y+z-q;
    if(m>n)
    {printf("Alice");}
    else if (m<n)
    {printf("Bob");}
    else
    {printf("Tie");}
    return 0;
}
