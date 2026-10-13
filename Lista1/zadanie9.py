tekst = input("Wprowadź tekst: ")
slowo = input("Wprowadź szukane słowo: ")

licznik = 0

    # Sprawdzamy wszystkie możliwe pozycje początku słowa w tekście.
for i in range(len(tekst) - len(slowo) + 1):
        zgodne = True

        # Porównujemy kolejne litery tekstu z literami szukanego słowa.
        for j in range(len(slowo)):
            if tekst[i + j] != slowo[j]:
                zgodne = False
                break

        if zgodne:
            licznik += 1

print("Liczba wystąpień słowa:", licznik)
