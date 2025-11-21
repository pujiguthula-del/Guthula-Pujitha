#include<stdio.h>
int main()
{
    int T, S, B;
    long long capacity_kb;
    if(scanf("%d %d %d", &T, &S, &B) != 3)
    {
        return 1;
    }
    capacity_kb = (long long)T * S * B;
    printf("%lld KB
", capacity_kb);
    return 0;
}
