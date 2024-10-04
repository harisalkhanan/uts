#include <iostream>
using namespace std;

int main() {
    float berat_badan, tinggi_badan_cm, tinggi_badan_m, IMT;

    // Input berat dan tinggi badan
    cout << "Masukkan berat badan (kg): ";
    cin >> berat_badan;
    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggi_badan_cm;

    // Konversi tinggi dari cm ke meter
    tinggi_badan_m = tinggi_badan_cm / 100;

    // Hitung IMT
    IMT = berat_badan / (tinggi_badan_m * tinggi_badan_m);

    // Tentukan kategori IMT
    cout << "IMT Anda: " << IMT << endl;
    if (IMT < 18.4) {
        cout << "Kriteria: Berat Badan Kurang" << endl;
    } else if (IMT >= 18.5 && IMT <= 24.9) {
        cout << "Kriteria: Berat Badan Ideal" << endl;
    } else if (IMT >= 25 && IMT <= 29.9) {
        cout << "Kriteria: Berat Badan Lebih" << endl;
    } else if (IMT >= 30 && IMT <= 39.9) {
        cout << "Kriteria: Gemuk" << endl;
    } else if (IMT >= 40) {
        cout << "Kriteria: Sangat Gemuk" << endl;
    }

    return 0;
}
