#include <iostream>
using namespace std;

int main() {
    int tinggi;

    // memasukkan tinggi tangga
    cout << "Masukkan tinggi : ";
    cin >> tinggi;

    // Loop mencetak tangka
    for (int i = 1; i <= tinggi; i++) {
        // Mencetak spasi
       
        // Mencetak bintang
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        // Pindah ke baris berikutnya
        cout << endl;
    }

    return 0;
}