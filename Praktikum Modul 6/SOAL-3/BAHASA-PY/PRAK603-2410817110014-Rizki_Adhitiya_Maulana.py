while True:
    n1,n2=map(int,input().split())
    
    if n1 == n2:
        nilai_1=list(map(int,input().split()))
        nilai_2=list(map(int,input().split()))
        hasil_kali=[nilai_1[i]*nilai_2[i]for i in range(n1)]
        print("")
        print(" ".join(map(str, hasil_kali)))
        break

    else :
        print("Jumlah tidak sama\n")
        continue