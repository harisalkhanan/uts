#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel
    string nama, npm;
    float nilaiAbsen, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    char hurufMutu;

    // Input data mahasiswa
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan NPM: ";
    cin >> npm;
    cout << "Masukkan Nilai Absen: ";
    cin >> nilaiAbsen;
    cout << "Masukkan Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS: ";
    cin >> nilaiUAS;

    // Menghitung nilai akhir berdasarkan bobot
    nilaiAkhir = (nilaiAbsen * 0.10) + (nilaiTugas * 0.20) + (nilaiUTS * 0.30) + (nilaiUAS * 0.40);

    // huruf mutu berdasarkan nilai akhir
    if (nilaiAkhir >= 85 && nilaiAkhir < 100) {
        hurufMutu = 'A';
    } else if (nilaiAkhir >= 80 && nilaiAkhir < 85) {
        hurufMutu = 'B';
    } else if (nilaiAkhir >= 75 && nilaiAkhir < 80) {
        hurufMutu = 'C';
    } else if (nilaiAkhir >= 70 && nilaiAkhir < 75) {
        hurufMutu = 'D';
    } else {
        hurufMutu = 'E';
    }

    // Output hasil
    cout << "\n--- Hasil Akhir ---\n";
    cout << "Nama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Nilai Absen: " << nilaiAbsen << endl;
    cout << "Nilai Tugas: " << nilaiTugas << endl;
    cout << "Nilai UTS: " << nilaiUTS << endl;
    cout << "Nilai UAS: " << nilaiUAS << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Huruf Mutu: " << hurufMutu << endl;

    return 0;
}
