#include <iostream>

using namespace std;

int main() {
    long totalBelanja;
    int persentaseDiskon = 0;
    long nominalDiskon = 0;
    long totalBayar = 0;

    cout << "=== Kalkulator Kasir Toko Buku ===" << endl;
    cout << "Masukkan total belanja (Rp): ";
    cin >> totalBelanja;

    if (totalBelanja < 100000) {
        persentaseDiskon = 0;
    } else if (totalBelanja >= 100000 && totalBelanja <= 299999) {
        persentaseDiskon = 10;
    } else if (totalBelanja >= 300000) {
        persentaseDiskon = 20;
    }

    nominalDiskon = totalBelanja * persentaseDiskon / 100;
    totalBayar = totalBelanja - nominalDiskon;

    cout << "\n--- Ringkasan Pembayaran ---" << endl;
    cout << "Diskon (" << persentaseDiskon << "%) : Rp " << nominalDiskon << endl;
    cout << "Total Bayar : Rp " << totalBayar << endl;

    return 0;
}
