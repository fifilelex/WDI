znak = input("Wprowadź znak: \n")
tekst = input("Wprowadź tekst: \n")
counter = 0;
for litera in tekst:
    if litera == znak:
        counter+= 1
print(counter)

