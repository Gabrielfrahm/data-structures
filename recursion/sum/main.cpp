#include <iostream>

using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}

int Isum(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    return s;
}

int main()
{
    cout << sum(6) << endl;
    cout << Isum(6);
    return 0;
}