#include <iostream>

using namespace std;

// recursion
/*
 func receive integer parameter 5 and return recursion so 5 + 4 + 3 + 2 + 1 = 15
*/

int func(int n)
{
    if (n > 0)
    {
        return func(n - 1) + n;
    };
    return 0;
}

int func2(int n)
{
    static int x = 0;

    if (n > 0)
    {
        x++;
        return func2(n - 1) + x;
    };
    return 0;
}

int main()
{
    int resultFunc = func(5);
    int resultFunc2 = func2(5);
    cout << resultFunc << endl;
    cout << resultFunc2 << endl;
    return 0;
}