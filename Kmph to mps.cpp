#include<stdio.h>
int main()
{
    int speed_kmph;
    float speed_mps;
    scanf("%d" , &speed_kmph);
    speed_mps=speed_kmph*(1000.0/3600.0);
    printf("%.2f", speed_mps);
    return 0;
}
