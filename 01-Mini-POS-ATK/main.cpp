#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string namaProduk[] = {"Buku Tulis", "Pulpen Gel", "Pensil 2B", "Penggaris", "Tipe-X"};
    int hargaProduk[] = {5000, 4000, 3000, 2500, 6000};
    int jumlahKatalog = 5;

    int keranjang[5] = {0};
    int pilihan;
    char lanjut;

    cout << "===========================================\n";
    cout << "   SISTEM KASIR TOKO ATK (MINI POS C++)    \n";
    cout << "===========================================\n";

    do {
        cout << "\n--- KATALOG BARANG ---\n";
        for (int i = 0; i < jumlahKatalog; i++) {
            cout << i + 1 << ". " << setw(15) << left << namaProduk[i] 
                 << " - Rp " << hargaProduk[i] << endl;
        }
        cout << "0. Selesai & Bayar\n";
        cout << "---------------------\n";
        cout << "Pilih nomor produk (0-" << jumlahKatalog << "): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= jumlahKatalog) {
            int qty;
            cout << "Masukkan jumlah " << namaProduk[pilihan - 1] << ": ";
            cin >> qty;

            if (qty > 0) {
                keranjang[pilihan - 1] += qty;
                cout << "[+] Berhasil menambahkan " << qty << " " << namaProduk[pilihan - 1] << " ke keranjang.\n";
            } else {
                cout << "[!] Jumlah pembelian minimal 1!\n";
            }
        } else if (pilihan == 0) {
            break; 
        } else {
            cout << "[!] Pilihan tidak valid. Silakan coba lagi.\n";
        }

        cout << "Tambah item lain? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    int totalBelanja = 0;
    bool adaPembelian = false;

    for (int i = 0; i < jumlahKatalog; i++) {
        if (keranjang[i] > 0) {
            totalBelanja += keranjang[i] * hargaProduk[i];
            adaPembelian = true;
        }
    }

    if (!adaPembelian) {
        cout << "\nTidak ada transaksi yang dilakukan. Terima kasih!\n";
        return 0;
    }

    double persentaseDiskon = 0.0;

    if (totalBelanja >= 50000) {
        persentaseDiskon = 0.05; 
    }

    int nominalDiskon = totalBelanja * persentaseDiskon;
    int totalBayar = totalBelanja - nominalDiskon;

    cout << "\n===========================================\n";
    cout << "             STRUK PEMBAYARAN              \n";
    cout << "===========================================\n";
    cout << setw(15) << left << "Item" 
         << setw(8) << right << "Qty" 
         << setw(15) << right << "Subtotal" << endl;
    cout << "-------------------------------------------\n";

    for (int i = 0; i < jumlahKatalog; i++) {
        if (keranjang[i] > 0) {
            int sub = keranjang[i] * hargaProduk[i];
            cout << setw(15) << left << namaProduk[i] 
                 << setw(8) << right << keranjang[i] 
                 << "   Rp " << setw(8) << right << sub << endl;
        }
    }

    cout << "-------------------------------------------\n";
    cout << setw(23) << left << "Total Belanja" << ": Rp " << totalBelanja << endl;
    cout << setw(23) << left << "Diskon" << ": Rp " << nominalDiskon 
         << " (" << (persentaseDiskon * 100) << "%)\n";
    cout << setw(23) << left << "Total Harus Dibayar" << ": Rp " << totalBayar << endl;
    cout << "-------------------------------------------\n";

    int uangDiterima;
    do {
        cout << "Masukkan nominal uang bayar: Rp ";
        cin >> uangDiterima;

        if (uangDiterima < totalBayar) {
            cout << "[!] Uang tidak cukup. Kekurangan: Rp " << (totalBayar - uangDiterima) << endl;
        }
    } while (uangDiterima < totalBayar);

    cout << "Uang Kembalian             : Rp " << (uangDiterima - totalBayar) << endl;
    cout << "===========================================\n";
    cout << "        TERIMA KASIH ATAS KUNJUNGANNYA     \n";
    cout << "===========================================\n";

    return 0;
}
