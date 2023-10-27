/*
Örnek Ekran Çıktısı 1
Kenar boyutlarini ve adedi giriniz: 5 4 3
* * * *
* * * *
* * * *
* * * *
* * * *
    * * * *
    * * * *
    * * * *
    * * * *
    * * * *
        * * * *
        * * * *
        * * * *
        * * * *
        * * * *
*/
#include <iostream>

int main() {
    int kenar1, kenar2, adet, i, j, k;

    std::cout << "Kenar boyutlarini ve adedi giriniz: ";
    std::cin >> kenar1 >> kenar2 >> adet;

    for (i = 1; i <= adet; i++) {
        for (j = 1; j <= kenar1; j++) {
            std::cout << "\n";
            for (k = 1; k <= kenar2 * (i - 1); k++)
                std::cout << " ";
            for (k = 1; k <= kenar2; k++)
                std::cout << "* ";
        }
    }
    return 0;
}
