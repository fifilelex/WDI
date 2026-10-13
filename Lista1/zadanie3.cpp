#include <iostream>

int main()
{
    int n, liczba, suma = 0;

    std::cout << "Wprowadź n\n";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Wprowadź element ciągu\n";
        std::cin >> liczba;
        suma += int(liczba);
    }
    std::cout << "Suma tego ciągu to: " << suma;
}