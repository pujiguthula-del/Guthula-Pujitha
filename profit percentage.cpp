#include<stdio.h>
int main()
{

    int X,Y;
    float Z;
    scanf("%d%d",&X,&Y);
    Z=((float) (Y-X)/X)*100;
    printf("%.2f",Z);
    return 0;
}
