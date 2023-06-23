#include <stdio.h>
#include <iostream>
struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle2
{
    int length;
    int breadth;
};

int main2()
{
    struct Rectangle2 *p;
    p = (struct Rectangle2 *)malloc(sizeof(struct Rectangle2));

    p->length = 15;
    p->breadth = 4;
    printf("%d %d", p->length, p->breadth);

    return 0;
}

int main()
{
    struct Rectangle r1 = {15, 20};
    struct Rectangle *p;
    p->length = 14;
    p->breadth = 4;

    printf("%d\n", r1.length);
    printf("%d\n", r1.breadth);
    printf("%d\n", p->length);
    printf("%d\n", p->breadth);

    main2();
    return 0;
}
