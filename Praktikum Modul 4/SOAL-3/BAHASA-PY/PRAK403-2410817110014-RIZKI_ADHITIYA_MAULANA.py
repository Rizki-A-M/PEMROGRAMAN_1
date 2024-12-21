angka_pertama, angka_kedua = map(int,input("").split())

i = angka_pertama
j = angka_kedua

if i < j:
    while i <= angka_kedua and j >= angka_pertama:
        print(f"{i} {j}", end=" ")

        if i < angka_kedua or j > angka_pertama:
            print("-", end=" ")
        i +=1
        j -=1
    
elif i > j:
    while i >= angka_kedua and j <= angka_pertama:
        print(f"{i} {j}", end=" ")

        if i > angka_kedua or j < angka_pertama:
            print("-", end=" ")
        i -=1
        j +=1