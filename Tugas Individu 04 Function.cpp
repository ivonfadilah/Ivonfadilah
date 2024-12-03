#include <iostream>
using namespace std;

int luas = 0;
int keliling = 0;
int panjang = 0;
int lebar = 0;
int alas = 0;
int tinggi = 0;
double JariJari = 3.14;


void Persegi(int sisi) {
	int luas = sisi * sisi;
	int keliling = 4 * sisi;
	cout << "Luas dan Keliling Persegi\n";
	cout << "Luas:" << luas << "\n";
	cout << "Keliling:" << keliling << "\n";
}

void PersegiPanjang(double Panjang, double Lebar) {
	double luas = Panjang * Lebar;
	double keliling = 2 * (Panjang + Lebar);
	cout << "\nLuas dan keliling Persegi Panjang\n";
	cout << "luas: " << luas << "\n";
	cout << "keliling: " << keliling << "\n";
}

void SegitigaSikuSiku(double alas, double tinggi) {
	double luas = 0.5 * alas * tinggi;
	double hipotenusa = sqrt(pow(alas, 2) + pow(tinggi, 2));
	double keliling = alas + tinggi + hipotenusa;
	cout << "\nLuas dan keliling Segitiga siku-siku\n";
	cout << "luas: " << luas << "\n";
	cout << "keliling: " << keliling << "\n";
}

void Lingkaran(double JariJari) {
	double PI = 3.14;
	double luas = PI * JariJari * JariJari;
	double keliling = 2 * PI * JariJari;
	cout << "\nLuas dan keliling Lingkaran\n";
	cout << "luas: " << luas << "\n";
	cout << "keliling: " << keliling << "\n";
}


void main() {
	Persegi(4);
	PersegiPanjang(7, 8);
	SegitigaSikuSiku(9, 7);
	Lingkaran(50);
}