#include <iostream>

using namespace std;

void func1(int x)
{
    if (x > 0)
    {
        cout << x << endl;
        func1(x - 1);
    }
}
void func2(int x)
{
    if (x > 0)
    {
        func2(x - 1);

        cout << x << endl;
    }
}

int main()
{
    int x = 3;
    func1(x);
    func2(x);

    return 0;
}