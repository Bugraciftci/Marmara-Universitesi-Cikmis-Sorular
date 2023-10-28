/*

-1 yazılana kadar girilen ve eşit sayıda tek ve çift rakamdan oluşan bir diziden, peş peşe iki rakam tek ya da çift
olmayacak şekilde belirtilen adet kadar rastgele rakam seçip ekrana yazdırır.

Örnek Ekran Çıktısı 1

Sayilarinizi giriniz: 3 8 0 5 -1
Adet giriniz: 20

8 5 0 3 8 3 0 5 0 3 8 5 0 5 0 5 0 5 0 5

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int dizi[100], adet, rastgele, i = 0, son;
    
    std::srand(std::time(nullptr));

    std::cout << "Sayilarinizi giriniz: " << std::endl;

    while (true) {
        std::cin >> dizi[i];
        
        if (dizi[i] == -1)
            break;
        
        i++;
    }

    std::cout << "Adet giriniz: ";
    std::cin >> adet;
    std::cout << std::endl;

    son = std::rand() % 2;

    while (adet > 0) {
        rastgele = std::rand() % i;

        if (dizi[rastgele] % 2 != son % 2) {
            son = dizi[rastgele];
            std::cout << son << " ";
            adet--;
        }
    }

    return 0;
}
