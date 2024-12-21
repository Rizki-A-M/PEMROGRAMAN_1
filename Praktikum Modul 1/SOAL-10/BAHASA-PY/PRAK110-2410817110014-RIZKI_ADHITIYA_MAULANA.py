import math

alas = 5
tinggi = 12
miring = math.sqrt(alas*alas+tinggi*tinggi)
keliling = alas+tinggi+miring
luas = 0.5*alas*tinggi

print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print("")
print("Jawab :")
print(f"Sisi A = {tinggi} cm")
print(f"Sisi B = {miring:.0f} cm")
print(f"Sisi C = {alas} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm")