#include <stdio.h>
#include <iostream>

// int main()
// {
//     int a = 10;
//     int *p;
//     p = &a;

//     printf("using pointer %d", *p);

//     return 0;
// }

// int main()
// {
//     int A[5] = {1,
//                 2,
//                 3,
//                 4,
//                 5};

//     int *p;
//     p = A;
//     for (int i = 0; i < 5; i++)
//         printf("%d\n", A[i]);
//     return 0;
// }

// int main()
// {
//     int *p;
//     p = (int *)malloc(5 * sizeof(int));
//     p[0] = 10;
//     p[1] = 23;
//     p[2] = 44;
//     p[3] = 55;
//     p[4] = 1;

//     for (int i = 0; i < 5; i++)
//         printf("%d\n", p[i]);

//     free(p);
//     return 0;
// }

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{

    int *p;
    float *p2;
    double *p3;
    char *p4;
    struct Rectangle *p5;

    printf("%lu\n", sizeof(p));
    printf("%lu\n", sizeof(p2));
    printf("%lu\n", sizeof(p3));
    printf("%lu\n", sizeof(p4));
    printf("%lu\n", sizeof(p5));

    return 0;
}