/*
Sonucu girilen bir üslü ifadenin ( > 1 ) hangi sayının kaçıncı dereceden kuvvetine karşılık geldiğini bulur.

Örnek Ekran Çıktısı 1

Sayi giriniz: 177147

3 sayisinin 11. dereceden kuvvetidir.

Örnek Ekran Çıktısı 2

Sayi giriniz: 64000000

20 sayisinin 6. dereceden kuvvetidir.

Not: “400 sayisinin 3. dereceden kuvvetidir.” çıktısı da doğru çıktı kabul edilecektir.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int sayi;
    
    cout << "Sayi giriniz: ";
    cin >> sayi;

    if (sayi <= 0) {
        cout << "Lutfen pozitif bir sayi girin." << endl;
        return 1;
    }

    for (int taban = 2; taban <= sayi; taban++) {
        int us = 0;
        long long int carpim = 1;

        while (carpim <= sayi) {
            carpim = carpim * taban;
            us++;
        }

        if (carpim == sayi) {
            cout << taban << " sayisinin " << us << ". dereceden kuvvetidir." << endl;
            break;
        }
    }

    return 0;
}
