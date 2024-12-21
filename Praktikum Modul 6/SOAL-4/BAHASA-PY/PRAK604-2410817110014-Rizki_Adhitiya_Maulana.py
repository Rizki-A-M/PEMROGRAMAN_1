pesan_sikamaru=input()
pesan_rahasia=input()

print(" ")
if len(pesan_sikamaru)==len(pesan_rahasia):
    bintang=0
    pagar=0
    hasil=""

    for i,j in zip(pesan_sikamaru,pesan_rahasia):
        if i==" " and j==" ":
            continue

        if i==j:
            hasil +="*"
            bintang +=1

        else :
            hasil+="#"
            pagar +=1

    print(hasil)
    print(f"*={bintang}")
    print(f"#={pagar}")

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

else:
    print("Panjang Kalimat berbeda, pesan palsu")