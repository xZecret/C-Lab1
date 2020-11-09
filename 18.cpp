#include <stdio.h>

int main()
{
    int x, k;
    printf("x = ");
    scanf("%d", &x);
    if ((x > 99) && (x < 1000)){ 
        k = x % 10; x /= 10;
        k+= x % 10; x /= 10;
        k+= x % 10; x /= 10;
        printf("k = %d", k);
    }
    else printf("wrong input");
    return 0;
}
