/*

Rakamları birbirlerinden farklı ve 0 rakamı içermeyen bir sayının en başındaki rakamı en sonuna alıp
diğer rakamları birer basamak sola doğru öteler,
tekrar aynı sayıya ulaşıldığında sonlanır ve bu süreci ekranda yazdırır.

Örnek Ekran Çıktısı 1

Sayinizi giriniz: 527413

274135
741352
413527
135274
352741
527413

*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sayi, gecici;

    cout << "Sayinizi giriniz: ";
    cin >> sayi;

    gecici = sayi;

    while (gecici != sayi) {
        cout << gecici << endl;
        gecici = gecici.substr(1) + gecici[0];
    }

    cout << sayi <<endl;

    return 0;
}


