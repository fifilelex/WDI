#include <iostream>

int main()
{
    int a = 3, n = 4;
    int res = 1;
    while (n > 0)
    {
        res *= a;
        n -= 1;
    }
    std::cout << res;
}
