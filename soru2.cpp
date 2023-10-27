/*

Girilen iki basamaklı 8 tamsayıyı rastgele ikişerli olarak eşleştirip ekrana yazdırır.

Örnek Ekran Çıktısı 1

Sayilarinizi giriniz: 75 16 18 19 97 40 22 46
Eslestirme: 16-22, 46-97, 40-19, 18-75

*/  

#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    int dizi[8], secim[8] = {0}, r1, r2, adet = 0;
    srand(time(nullptr));

    std::cout << "Sayilarinizi giriniz: ";
    for (int i = 0; i < 8; i++) {
        std::cin >> dizi[i];
    }

    std::cout << "Eslestirme: ";
    while (true) {
        r1 = rand() % 8;
        r2 = rand() % 8;

        if (r1 != r2 && secim[r1] == 0 && secim[r2] == 0) {
            secim[r1] = 1;
            secim[r2] = 1;
            std::cout << dizi[r1] << "-" << dizi[r2] << " ";
            adet++;
        }

        if (adet == 4) {
            break;
        }
    }

    return 0;
}
