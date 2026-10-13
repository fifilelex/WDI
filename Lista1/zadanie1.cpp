#include <iostream>

int main()
{
    int a, b, c, d;
    std::cout << "Wprowadz cztery liczby ";
    std::cin >> a >> b >> c >> d;
    if (b < a)
    {
        a = b;
    }
    if (c < a)
    {
        a = c;
    }
    if (d < a)
    {
        a = d;
    }
    std::cout << a;
}