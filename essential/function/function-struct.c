#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

// call by value
int area(struct Rectangle r)
{
    printf("area  %d , %d\n", r.length, r.breadth);
    return r.length * r.breadth;
};

// call by address
void changeLength(struct Rectangle *r, int newLength)
{
    r->length = newLength;
};

struct Rectangle *createNewRectangle(int l, int b)
{
    struct Rectangle *r;
    r = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    r->length = l;
    r->breadth = b;
    return r;
};

int main()
{
    struct Rectangle r = {10, 5};
    printf("area of this rectangle is %d\n", area(r));

    changeLength(&r, 15);
    printf("this new length rectangle is %d\n", r.length);

    struct Rectangle *newR = createNewRectangle(10, 7);
    printf("this is a new rectangle %d , %d\n ", newR->length, newR->breadth);

    return 0;
}