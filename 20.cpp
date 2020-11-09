#include <stdio.h>

int main()
{
    int x, a, b, c;
    printf("x = ");
    scanf("%d", &x);
    if ((x > 99) && (x < 1000)){ 
        a = x % 10; x /= 10;
        b = x % 10; x /= 10;
        c = x % 10; x /= 10;
        printf("k = %d%d%d", a, b, c);
    }
    else printf("wrong input");
    return 0;
}
