#include <iostream>
using namespace std;



int main() {
    int batas;

    // Meminta pengguna untuk memasukkan batas
    cout << "Masukkan batas: ";
    cin >> batas;

    cout << "Bilangan dari 1 hingga " << batas << "\n";
    cout << "Bilangan Genap: ";
    for (int j = 1; j <= batas; ++j) {
        if (j % 2 == 0) {
            cout << j << "\n";
        }
    }

    cout << "\nBilangan Ganjil: ";
    for (int i = 1; i <= batas; ++i) {
        if (i % 2 != 0) {
            cout << i << "\n";
        }
    }

    
    cout << endl;

    return 0;
}