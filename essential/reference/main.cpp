#include <stdio.h>

int main()
{
    int a = 10;
    int &r = a;

    int b = 30;
    r = b;

    printf("%d\n", a);
    printf("%d", r);
    return 0;
}