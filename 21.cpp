#include <stdio.h>

int main()
{
    int x, h, m;
    printf("x = ");
    scanf("%d", &x);
    m = x / 60;
    h = m / 60;
    m-= h * 60;
    printf("hours = %d\nminutes = %d", h, m);
    return 0;
}
