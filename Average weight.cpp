#include<stdio.h>
int main()
{
    int avg, w1, w2;
    scanf("%d %d %d", &avg, &w1, &w2);
    int w3 = (3 * avg) - (w1 +w2);
    printf("%d", w3);
    return 0;
}
