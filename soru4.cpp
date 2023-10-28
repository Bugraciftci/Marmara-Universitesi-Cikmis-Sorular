/*

Örnek ekran çıktılarında gösterildiği gibi; birbirlerini tamamlayacak şekilde ve belirtilen kenar uzunluğuna sa-
hip iki adet ikizkenar dik üçgen figürü oluşturur.

Örnek Ekran Çıktısı 1

Kenar uzunlugunu giriniz: 5

*   * * * * *
* *   * * * *
* * *   * * *
* * * *   * *
* * * * *   *

*/
#include <iostream>

int main() {
    int kenar, i, j;

    std::cout << "Kenar uzunluğunu giriniz: ";
    std::cin >> kenar;

    for (i = 1; i <= kenar; i++) {
        std::cout << "\n";
        for (j = 1; j <= kenar + 1; j++) {
            std::cout << "* ";
            if (j == i)
                std::cout << " ";
        }
    }

    return 0;
}
