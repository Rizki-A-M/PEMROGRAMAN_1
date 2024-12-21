nilai = int(input())

if nilai == 0 :
    print("Nol")
elif nilai >= 1 and nilai <= 9 :
    print("Satuan")
elif nilai >= 11 and nilai <= 19 :
    print("Belasan")
elif nilai == 10 or nilai >= 20 and nilai <= 99 :
    print("Puluhan")
else :
    print("Anda Menginput Melebihi Limit Bilangan")