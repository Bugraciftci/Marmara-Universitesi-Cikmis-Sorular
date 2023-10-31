/*
Belirtilen aralıktaki omurgalı asal sayıları ekrana yazdırır.
Varsayım: İlk ve son rakamı aynı olan asal sayılara "omurgalı asal sayı" denir.

Örnek Ekran Çıktısı 1

Sayi araligini giriniz: 7700 8500

7717 7727 7757 7817 7867 7877 7907 7927 7937

*/

#include <iostream>
using namespace std;

int main()
{
    int baslangic, bitis, sayi, asal, bolen, katsayi, ilk_rakam;

    cout << "Sayi araligini giriniz: ";
    cin >> baslangic >> bitis;

    for (sayi = baslangic; sayi <= bitis; sayi++) {
        asal = 1;

        for (bolen = 2; bolen * bolen <= sayi; bolen++) {
            if (sayi % bolen == 0) {
                asal = 0;
                break;
            }
        }

        if (asal == 1) {
            katsayi = 1;

            while (katsayi <= sayi)
                katsayi = katsayi * 10;

            ilk_rakam = sayi / (katsayi / 10);

            if (ilk_rakam == sayi % 10)
                cout << sayi << " ";
        }
    }

    return 0;
}
