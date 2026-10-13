#include <iostream>

int main()
{
    int a, b, temp;
    std::cout << "Wypisz a i b";
    std::cin >> a >> b;
    if (b >= a)
    {
        temp = b;
        b = a;
        a = temp;
    }
    for (int i = b; i <= (a * b); i++)
    {
        if (((i / a) * a == i) && ((i / b) * b == i))
        {
            std::cout << "NWW to: " << i;
            return 0;
        }
    }
}