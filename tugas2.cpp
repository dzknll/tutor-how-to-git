#include <iostream>

using namespace std;

int main() {
    int kodeMinuman;
    long uangAnda;
    long hargaMinuman = 0;
    string namaMinuman = "";

    cout << "=== VENDING MACHINE AUTOMAT ===" << endl;
    cout << "Pilihan Minuman:" << endl;
    cout << "1. Air Mineral (Rp 4000)" << endl;
    cout << "2. Teh Botol (Rp 6000)" << endl;
    cout << "3. Kopi Susu (Rp 10000)" << endl;
    
    cout << "Pilih kode minuman (1-3): ";
    cin >> kodeMinuman;

    switch (kodeMinuman) {
        case 1:
            namaMinuman = "Air Mineral";
            hargaMinuman = 4000;
            break;
        case 2:
            namaMinuman = "Teh Botol";
            hargaMinuman = 6000;
            break;
        case 3:
            namaMinuman = "Kopi Susu";
            hargaMinuman = 10000;
            break;
        default:
            cout << "\nError: Kode minuman tidak valid!" << endl;
            return 0; 
    }

    cout << "Masukkan uang Anda (Rp): ";
    cin >> uangAnda;

    cout << "\n--- DETAIL TRANSAKSI ---" << endl;

    if (uangAnda < hargaMinuman) {
        long kekurangan = hargaMinuman - uangAnda;
        cout << "Transaksi Gagal! Uang Anda kurang Rp " << kekurangan << "." << endl;
    } else {
        long kembalian = uangAnda - hargaMinuman;
        cout << "Transaksi Berhasil! Anda membeli " << namaMinuman << "." << endl;
        cout << "Total Kembalian: Rp " << kembalian << endl;

        long lembar5000 = kembalian / 5000;
        long sisa = kembalian % 5000;
        long lembar1000 = sisa / 1000;

        cout << "Pecahan kembalian:" << endl;
        cout << "- Lembar Rp 5.000: " << lembar5000 << " lembar" << endl;
        cout << "- Lembar Rp 1.000: " << lembar1000 << " lembar" << endl;
    }

    return 0;
}
