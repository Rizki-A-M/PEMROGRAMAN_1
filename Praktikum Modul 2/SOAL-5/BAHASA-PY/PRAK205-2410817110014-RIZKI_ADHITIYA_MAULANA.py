import math

angka = []

inputan = input().split()

angka.extend(inputan)

while(len(angka) < 2):
    inputan = input().split()
    angka.extend(inputan)

a = float(angka[0])
b = float(angka[1])

c = math.sqrt((b * b) - (a * a))
keliling = a + b + c
luas = 0.5 * c * a

print(" ")
print(f"Alas = {c:.0f} cm")
print(f"Tinggi = {a:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2\n")