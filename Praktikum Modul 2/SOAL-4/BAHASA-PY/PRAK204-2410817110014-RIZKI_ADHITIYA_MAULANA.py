import math
angka = []

inputan = input().split()

angka.extend(inputan)

while(len(angka) < 2):
    inputan = input().split()
    angka.extend(inputan)

jari_jari = float(angka[0])
tinggi = float(angka[1])

volume = 22.0 / 7.0 * jari_jari * jari_jari * tinggi
luas = 2 * 22.0 / 7.0 * jari_jari * (jari_jari + tinggi)
keliling = 2 * 22.0 / 7.0 * jari_jari

print(" ")
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}\n")