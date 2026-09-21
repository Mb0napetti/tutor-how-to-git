#include <iostream>
using namespace std;

int main(){
    cout << "=== Kakulator Kasir Toko Buku ===\n";
    cout << "Masukan Total Belanja (Rp):\n";
    float total_belanja;
    float diskon;
    int total_bayar;
    cin >> total_belanja;
    cout << "--- Ringkasan Pembayaran ---\n";
    if (total_belanja < 100000) {
        cout << "diskon (0%)\t: Rp" << total_belanja;
        cout << "Total Bayar\t: Rp" << total_belanja;
    } else if (total_belanja >= 100000 && total_belanja < 300000) {
        diskon = total_belanja * 0.1;
        total_bayar = total_belanja - diskon;
        cout << "diskon (10%)\t: Rp" << total_belanja;
        cout << "Total Bayar\t: Rp" << total_bayar;
    } else {
        diskon = total_belanja * 0.2;
        total_bayar = total_belanja - diskon;
        cout << "diskon (20%)\t: Rp" << total_belanja;
        cout << "Total Bayar\t: Rp" << total_bayar;
    }
    return 0;
}