#include <iostream>

using namespace std;

// normal way
// class Arithmetic
// {
// private:
//     int a;
//     int b;

// public:
//     Arithmetic(int a, int b)
//     {
//         this->a = a;
//         this->b = b;
//     }
//     int sum()
//     {
//         return a + b;
//     }
//     int sub()
//     {
//         return a - b;
//     }
// };

// class Arithmetic
// {
// private:
//     int a;
//     int b;

// public:
//     Arithmetic(int a, int b);
//     int sum();
//     int sub();
// };

// Arithmetic::Arithmetic(int a, int b)
// {
//     this->a = a;
//     this->b = b;
// }

// int Arithmetic::sum()
// {
//     return a + b;
// }
// int Arithmetic::sub()
// {
//     return a - b;
// };

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T sum();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::sum()
{
    return a + b;
}

template <class T>
T Arithmetic<T>::sub()
{
    return a - b;
};

int main()
{
    // normal way
    //  Arithmetic ar(3, 2);
    //  cout << "sum " << ar.sum() << endl;
    //  cout << "sub " << ar.sub() << endl;

    // template int
    // Arithmetic ar(3, 2);
    // cout << "sum " << ar.sum() << endl;
    // cout << "sub " << ar.sub() << endl;

    // template T
    // Arithmetic<int> ar(3, 2);
    Arithmetic<float> ar(3.2, 2.5);
    cout << "sum " << ar.sum() << endl;
    cout << "sub " << ar.sub() << endl;
    return 0;
}