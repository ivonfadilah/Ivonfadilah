#include <iostream>
using namespace std;

void hitungEK(double massa, double kecepatan) {
    double energiKinetik = 0.5 * massa * kecepatan * kecepatan;
    cout << "Energi kinetik: " << energiKinetik << " Joule" << endl;
}

int main() {
    double massa, kecepatan;

    cout << "Masukkan massa (kg): ";
    cin >> massa;
    cout << "Masukkan kecepatan (m/s): ";
    cin >> kecepatan;

    hitungEK(massa, kecepatan);

    return 0;
}