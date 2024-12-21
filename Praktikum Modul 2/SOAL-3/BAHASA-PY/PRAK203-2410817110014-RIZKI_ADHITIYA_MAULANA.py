angka = []

inputan = input().split()

angka.extend(inputan)

while(len(angka) < 6):
    inputan = input().split()
    angka.extend(inputan)

a = float(angka[0])
b = float(angka[1])
i = float(angka[2])
j = float(angka[3])
x = float(angka[4])
y = float(angka[5])

hasil = ((a - b) * i) / j - (x + y)
print(f"{hasil:.3f}")