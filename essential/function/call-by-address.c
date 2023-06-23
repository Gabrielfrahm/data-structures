#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("swap %d %d\n", *a, *b);
}

int main()
{
    int numb1 = 10, numb2 = 20;
    swap(&numb1, &numb2);
    printf("main %d %d", numb1, numb2);
    return 0;
}