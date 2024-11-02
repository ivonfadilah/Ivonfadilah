#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    int golongan, jamkerja, upahperjam, totalgaji, lembur;

    cout << "Masukkan nama Anda: ";
    cin >> nama;
    cout << "Masukkan Golongan Anda: ";
    cin >> golongan;
    cout << "Masukkan jam kerja dan per minggu: ";
    cin >> jamkerja;

    if (golongan == 1) {
        upahperjam = 25000;
    }
    else if (golongan == 2) {
        upahperjam = 35000;
    }
    else if (golongan == 3) {
        upahperjam = 50000;
    }
    else {
        cout << "Golongan tidak valid!" << endl;
        return 1;
    }

    totalgaji = jamkerja * upahperjam;

    if (jamkerja > 48) {
        lembur = (jamkerja - 48) * 10000;
    }

    totalgaji += lembur;
    cout << "\nTotal Gaji " << nama << " per minggu : " << totalgaji << endl;

    return 0;
}