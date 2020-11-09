#include <stdio.h>

int main()
{
    int x, k;
    printf("x = ");
    scanf("%d", &x);
    k = (x / 100) % 10;
    printf("k = %d", k);
    return 0;
}
