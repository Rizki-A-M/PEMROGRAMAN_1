ordo = int(input())

print("Matriks A")
matriks_A = []
for i in range(ordo):
    angka_1 = list(map(int,input().split()))
    matriks_A.append(angka_1)

print("Matriks B")
matriks_B = []
for i in range(ordo):
    angka_2 = list(map(int,input().split()))
    matriks_B.append(angka_2)

matriks_AxB = [[0] * ordo for _ in range(ordo)]
for i in range(ordo):
    for j in range(ordo):
        for n in range(ordo):
            matriks_AxB[i][j] += matriks_A[i][n] * matriks_B[n][j]

print("\nMatriks AxB")
for angka_1 in matriks_AxB:
    print(" ".join(map(str,angka_1)))