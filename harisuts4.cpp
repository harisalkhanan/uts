#include <iostream>
using namespace std;

// Function untuk operasi penjumlahan
double tambah(double a, double b) {
    return a + b;
}

// Function untuk operasi pengurangan
double kurang(double a, double b) {
    return a - b;
}

// Function untuk operasi perkalian
double kali(double a, double b) {
    return a * b;
}

// Function untuk operasi pembagian
double bagi(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Pembagian dengan 0!" << endl;
        return 0;
    }
}

int main() {
    int pilihan;
    double operand1, operand2, hasil;
    
    // Menampilkan menu
    cout << "Pilih operasi matematika: \n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "Masukkan pilihan (1-4): ";
    cin >> pilihan;

    // Meminta input dari user untuk operand
    cout << "Masukkan operand pertama: ";
    cin >> operand1;
    cout << "Masukkan operand kedua: ";
    cin >> operand2;

    // Switch untuk memilih operasi berdasarkan input user
    switch(pilihan) {
        case 1:
            hasil = tambah(operand1, operand2);
            cout << "Hasil dari Penjumlahan untuk " << operand1 << " + " << operand2 << " = " << hasil << endl;
            break;
        case 2:
            hasil = kurang(operand1, operand2);
            cout << "Hasil dari Pengurangan untuk " << operand1 << " - " << operand2 << " = " << hasil << endl;
            break;
        case 3:
            hasil = kali(operand1, operand2);
            cout << "Hasil dari Perkalian untuk " << operand1 << " * " << operand2 << " = " << hasil << endl;
            break;
        case 4:
            hasil = bagi(operand1, operand2);
            if (operand2 != 0) {
                cout << "Hasil dari Pembagian untuk " << operand1 << " : " << operand2 << " = " << hasil << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}
