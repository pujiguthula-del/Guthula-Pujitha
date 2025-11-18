#include<stdio.h>
int main()
{
    float inches, centimeters;
    scanf("%f" , &inches);
    centimeters = inches * 2.54;
    printf("%.2f", centimeters);
    return 0;
}
