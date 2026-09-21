#include <iostream>
using namespace std;

int main(){
    string kodeMinuman;
    int harga, uang, kurang, kembalian, hasil, hasilakhir, pecahan5000 = 0, pecahan1000 = 0;

    cout << "=== VENDING MACHINE AUTOMAT ===" << endl;
    cout << "Pilihan Minuman :"<< endl;
    cout << "1. Air Mineral (Rp 4000)" <<endl;
    cout << "2. Teh Botol (Rp 6000)" <<endl;
    cout << "3. Kopi Susu (Rp 10000)" <<endl;


    unsigned int kode = 1;
    switch (kode){
        case 1: 
        kodeMinuman = "Air Mineral"; harga = 4000; break;
        case 2: 
        kodeMinuman = "Teh Botol"; harga = 6000; break;
        case 3: 
        kodeMinuman = "Kopi Susu"; harga = 10000; break;
        default: 
        cout << "error" << endl; break;
    }
    cout << "Pilih kode minuman (1-3) : " << endl;
    cin >> kodeMinuman;
    cout << "Masukkan uang anda (Rp) : " << endl;
    cin >> uang;
    cout << "--- DETAIL TRANSAKSI---" << endl;

    // operasi perhitungan
    kurang = harga - uang;
    kembalian = uang - harga;
    pecahan5000 = kembalian / 5000;
    kembalian = kembalian % 5000;
    pecahan1000 = kembalian / 1000;
    kembalian = kembalian % 1000;

    if (uang < harga){
        cout << "Transaksi Gagal! Uang Anda Kurang Rp " << kurang;
    }
    else{
    cout << "Kembalian : " << endl;
    cout << "Lembar Rp 5000 : " << pecahan5000 << endl;
    cout << "Lembar Rp 1000 : " << pecahan1000 << endl;
    }


 return 0;
}