#include <iostream>
using namespace std;

int Total(int harga, int jmlbarang) {
    return harga * jmlbarang;
}
int pengurangan (int bayar, int total_bayar){
	return bayar - total_bayar;
}

double Discount(int total) {
    if (total >= 120000) {
        return 0.6 * total;
    } else if (total >= 60000) {
        return 0.4 * total;
    } else if (total >= 30000) {
        return 0.2 * total;
    } else {
        return 0;
    }
}
int main() {
    int pesanan, jmlbarang, harga, total, bayar,total_bayar, diskon, kembali;
    char ulang, ukuran;
    string barang;

    ulang:
    system("cls");
    cout << "-----------------Toko Kopi Orang-------------------" << endl;
    cout << "-------------Jl.Nya Orang No. 1 Bontang------------" << endl;
    cout << "===================================================" << endl;
    cout << "|    [PILIH MINUMAN]    kecil    sedang    besar  |" << endl;
    cout << "| 1. Espresso           15k      20k       25k    |" << endl;
    cout << "| 2. Cappuccino         27k      32k       27k    |" << endl;
    cout << "| 3. Affogato           30k      35k       40k    |" << endl;
    cout << "| 4. Latte              27k      32k       37k    |" << endl;
    cout << "| 5. Macchiato          10k      15k       20k    |" << endl;
    cout << "| 6. Americano          20k      25k       30k    |" << endl;
    cout << "| 7. Bayar                                        |" << endl;
    cout << "===================================================" << endl;

    do {
        cout << "Masukan pilihan Anda: ";
        cin >> pesanan;

        if (pesanan >= 1 && pesanan <= 6) {
            cout << "Pilih Ukuran (1=kecil, 2=sedang, 3=besar): ";
            cin >> ukuran;
        }

        switch (pesanan) {
            case 1:
                barang = "Espresso";
                harga = (ukuran == '1') ? 15000 : (ukuran == '2') ? 20000 : 25000;
                break;
            case 2:
                barang = "Cappuccino";
                harga = (ukuran == '1') ? 27000 : (ukuran == '2') ? 32000 : 37000;
                break;
            case 3:
                barang = "Affogato";
                harga = (ukuran == '1') ? 30000 : (ukuran == '2') ? 35000 : 40000;
                break;
            case 4:
                barang = "Latte";
                harga = (ukuran == '1') ? 27000 : (ukuran == '2') ? 32000 : 37000;
                break;
            case 5:
                barang = "Macchiato";
                harga = (ukuran == '1') ? 10000 : (ukuran == '2') ? 15000 : 20000;
                break;
            case 6:
                barang = "Americano";
                harga = (ukuran == '1') ? 20000 : (ukuran == '2') ? 25000 : 30000;
                break;
            case 7:
            	system ("cls");
            	diskon = Discount (total);
            	total_bayar = total - diskon;
                cout << "Uang Bayar : " << total << endl;
                cout << "Diskon : " << diskon << endl;
                cout << "Total Bayar : " << total_bayar << endl;
                cout << "Bayar : ";
                cin >> bayar;
                kembali = pengurangan(bayar, total_bayar);
                cout << "Kembali : " << kembali << endl;
                break;
            default:
                cout << "Salah Tolol!" << endl;
                break;
        }

        if (pesanan >= 1 && pesanan <= 6) {
            cout << "Jumlah barang: ";
            cin >> jmlbarang;
            total += Total(harga, jmlbarang);
            cout << jmlbarang << " " << barang << " = Rp. " << Total(harga, jmlbarang) << endl << endl;
        }

    } while (pesanan != 7);

    menulagi:
    cout << "Anda ingin berbelanja lagi (y/t) ?";
    cin >> ulang;
    if (ulang == 'y' || ulang == 'Y') {
        goto ulang;
    } else if (ulang == 't' || ulang == 'T') {
        goto selesai;
    } else {
        cout << "Inputkan y/t!!!" << endl;
        goto menulagi;
    }

    selesai:
    system("cls");
    cout << "Terimakasih telah berbelanja di TOKO KOPI ORANG";

    return 0;
}

