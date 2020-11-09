#include <stdio.h>

int main()
{
    double x;
    int k;
    printf("x = ");
    scanf("%lf", &x);
    k = x * 10;
    k %= 10;
    printf("k = %d", k);
    return 0;
}
