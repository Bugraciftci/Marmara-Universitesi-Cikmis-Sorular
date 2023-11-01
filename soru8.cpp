/*

-1 yazılana kadar girilen bir sayı dizisinin elemanlarındaki rakamların tümü kullanılarak yazılabilecek en büyük
sayıyı yazdırır.

Örnek Ekran Çıktısı 1

Sayilarinizi giriniz: 15 76 10 157 13 140 -1

Olusturulabilecek en buyuk sayi: 77655431111100

*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> sayilar;
    int sayi;

    std::cout << "Sayilarinizi giriniz (sonlandirmak icin -1 girin):\n";

    while (true) {
        std::cin >> sayi;

        if (sayi == -1)
            break;

        sayilar.push_back(sayi);
    }

    if (sayilar.empty()) {
        std::cout << "Girilen sayi yok." << std::endl;
        return 0;
    }

    // Sayıları büyükten küçüğe sırala
    std::sort(sayilar.rbegin(), sayilar.rend());

    std::cout << "Olusturulabilecek en buyuk sayi: ";

    for (int sayi : sayilar) {
        std::cout << sayi;
    }

    std::cout << std::endl;

    return 0;
}
