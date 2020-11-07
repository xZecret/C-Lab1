#include <stdio.h>

int main()
{
    char a, b, c, d;
    int x;
    scanf("%c%c%c%c", &a, &b, &c, &d);
    x = d | c << 8 | b << 16 | a << 24;
    printf("%#x\n%d", x, x);
    return 0;
}
