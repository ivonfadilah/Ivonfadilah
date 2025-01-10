#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int nilai[] = { 92, 65, 74, 80, 80, 70, 78 };
    int n = sizeof(nilai) / sizeof(nilai[0]);

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nilai[i];
    }
    double mean = sum / n;


    sort(nilai, nilai + n);
    double median;
    if (n % 2 == 0)
        median = (nilai[n / 2 - 1] + nilai[n / 2]) / 2.0;
    else
        median = nilai[n / 2];


    double variance = 0;
    for (int i = 0; i < n; i++) {
        variance += pow(nilai[i] - mean, 2);
    }
    variance /= n;
    double std_dev = sqrt(variance);


    cout << "Mean: " << mean << endl;
    cout << "Median: " << median << endl;
    cout << "Standar Deviasi: " << std_dev << endl;

    return 0;
}