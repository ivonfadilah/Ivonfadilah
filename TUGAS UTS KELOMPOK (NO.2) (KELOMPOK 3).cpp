#include <iostream>
using namespace std;

int main() {
    int jumlahMotor, jumlahMobil;
    int jamMasuk, jamKeluar;
    const int tarifMotor = 2000;
    const int tarifMobil = 5000;

    cout << "Masukkan jumlah motor: ";
    cin >> jumlahMotor;
    cout << "Masukkan jumlah mobil: ";
    cin >> jumlahMobil;


    cout << "Input jam masuk (format 24 jam): ";
    cin >> jamMasuk;


    cout << "Input jam keluar (format 24 jam): ";
    cin >> jamKeluar;

    int durasi = jamKeluar - jamMasuk;
    if (durasi <= 0) {
        durasi += 24;
    }

    int totalBiaya = (jumlahMotor * tarifMotor * durasi) + (jumlahMobil * tarifMobil * durasi);


    cout << "\nTotal biaya parkir: Rp " << totalBiaya << " (" << durasi << " jam)" << endl;

    return 0;
}