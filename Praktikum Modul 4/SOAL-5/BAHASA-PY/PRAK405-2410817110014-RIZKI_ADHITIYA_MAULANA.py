baris, pengali = map(int,input("").split())
total = 0

for i in range (1, baris + 1):
    sum_baris = 0
    print("(", end="")

    for j in range (i, 0, -1):
        print(f"{j} * {pengali}", end="")
        sum_baris += j * pengali

        if j > 1:
            print(") + (", end="")

    print(f") = {sum_baris}")
    total += sum_baris

print(f"{total}")