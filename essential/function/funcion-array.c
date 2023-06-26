#include <stdio.h>

void arrayFunc(int *a)
{
    for (int i = 0; i < 5; i++)
    {
        printf("inside function %d\n", a[i]);
        printf("sizeof inside function %lu\n", sizeof(a[i]));
    };

    printf("sizeof inside function %lu\n", sizeof(a));
}

int main()
{
    int a[] = {2, 4, 6, 8, 10};
    arrayFunc(a);
    printf("sizeof  %lu\n", sizeof(a));
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%d, ", a[i]);
    };
    return 0;
}