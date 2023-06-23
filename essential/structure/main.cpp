#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r1 = {10, 5};

    printf("%lu\n", sizeof(r1));
    printf("%d\n", r1.length);
    printf("%d\n", r1.breadth);

    return 0;
}
