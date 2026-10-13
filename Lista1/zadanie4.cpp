#include <iostream>
int main()
{
    int x, y, temp;
    std::cin >> x >> y;
    temp = x;
    x = y;
    y = temp;
    std::cout << "X: " << x << "Y: " << y;
    return x, y;
}