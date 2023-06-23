#include <stdio.h>

// each int in memory equal 4 bits

int main()
{
    int A[10] = {12, 20, 28, 30};

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}
