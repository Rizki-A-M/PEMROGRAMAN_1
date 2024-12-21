kolom=int(input())
nilai_Zetsu=list(map(int,input().split()))

print("")
for i in range(kolom):
    print(nilai_Zetsu[i]*(i+1), end=" ")