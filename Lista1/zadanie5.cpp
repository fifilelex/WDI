#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;
    if (((x / y) * y == x) || ((y / x) * x == y))
    {
        std::cout << "Tak";
        return true;
    }
    else
    {
        std::cout << "Nie";
        return false;
    }
}
