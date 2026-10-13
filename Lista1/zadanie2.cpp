#include <iostream>

int main()
{
    int a, b, c;
    std::cout << "Wprowadz trzy liczby ";
    std::cin >> a >> b >> c;

    int min = a, max = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    std::cout << "Minimum " << min << "Maksimum: " << max;
}