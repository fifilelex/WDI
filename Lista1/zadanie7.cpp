#include <iostream>

int main()
{
    int n, suma;
    std::cout << "Wprowadź n\n";
    std::cin >> n;
    suma = (0.5 + 0.5 * n) * n;
    std::cout << "Suma ciągu 1+2+...+n  to: "
              << suma;
    return 0;
}