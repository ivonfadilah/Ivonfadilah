#include <iostream>
using namespace  std;

int main() {
	int n; "Masukkan jumlah data: ";
	cout << "Masukkan jumlah data: ";
	cin >> n;

	int jumlahGanjil = 0;
	int jumlahGenap = 0;

	for (int i = 1; i < n; ++i) {

		if (i % 2 == 0) {
			jumlahGanjil += i;

		}
		else {
			jumlahGenap += i;
		}
	}
	cout << "Jumlah total bilangan genap: " << jumlahGanjil << endl;
	cout << "Jumlah total bilangan ganjil: " << jumlahGenap << endl;
}