#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    int jumlahOrang, totalHarga, diskon, nomor;
    int pilihanFilm, b,k, ulangtidak, hargaTiket;
    char namaPemesan[70];
    char judulFilm[50];
    string noDuduk;
    int hitungdiskon(int totalHarga);

menu:
cout << "==================================" << endl;
cout << setw(30) << "DAFTAR FILM YANG TERSEDIA" << endl;
cout << "==================================" << endl;
cout << "1." << setfill('.') << setw(32) << "AQUAMAN 2" << endl;
cout << "2." << setfill('.') << setw(32) << "13 BOM DI JAKARTA" << endl;
cout << "3." << setfill('.') << setw(32) << "LAYANGAN PUTUS" << endl;
cout << "4." << setfill('.') << setw(32) << "HAMKA 2" << endl;
cout << "5." << setfill('.') << setw(32) << "ANCIKA 1995" << endl;
cout << "==================================" << endl;
cout << "Masukkan nama pemesan : ";
cin >> namaPemesan;
ulangpilihan:
cout << "Pilih nomor film : ";
cin >> pilihanFilm;

switch (pilihanFilm) {
case 1:
    strcpy (judulFilm, "AQUAMAN 2");
    break;
case 2:
    strcpy (judulFilm, "13 BOM DI JAKARTA");
    break;
case 3:
    strcpy (judulFilm, "LAYANGAN PUTUS");
    break;
case 4:
    strcpy (judulFilm, "HAMKA 2");
    break;
case 5:
    strcpy (judulFilm, "ANCIKA 1995");
    break;
    default:
    cout << "==================================" << endl;
    cout << "  Pilihan yang dimasukkan salah!  " << endl;
    cout << "  Silahkan masukkan ulang pilian  " << endl;
    cout << "==================================" << endl;
    goto ulangpilihan;
    }
    do {
    cout << "Masukkan jumlah orang: ";
    cin >> jumlahOrang;

    cout << "==================================" << endl;
    cout << "     Jumlah tiket tidak valid!    " << endl;
    cout << "==================================" << endl;
}   while (jumlahOrang <= 0);

    system("cls");
    cout << "=========================================" << endl;
    cout << "            PILIH TEMPAT DUDUK           " << endl;
    cout << "=========================================" << endl;
    cout << "              [   LAYAR   ]              " << endl;

    for (b = 1; b <= 10; ++b) {
        for (k = 1; k <= 6; ++k) {
        nomor = (b - 1) * 6 + k;
        cout << "[ " << setw(2) << setfill(' ') << nomor << " ] ";
    }
cout << endl;
}
    cout << "=========================================" << endl;
    cout << "Masukkan nomor tempat duduk untuk " << jumlahOrang << " Orang" << endl;
    cout << "Pisahkan ke-" << jumlahOrang <<" nomor dengan spasi" << endl;
    cin.ignore();
    getline(cin, noDuduk);
    hargaTiket = 50000;
    totalHarga = jumlahOrang * hargaTiket;
    diskon = hitungdiskon(totalHarga);
    system("cls");
    cout << "============================================" << endl;
    cout << "             STRUK PEMBELIAN TIKET          " << endl;
    cout << "============================================" << endl;
    cout << "NAMA               : " << strupr(namaPemesan) << endl;
    cout << "FILM               : " << judulFilm << endl;
    cout << "JUMLAH ORANG       : " << jumlahOrang << " ORANG" << endl;
    cout << "TEMPAT DUDUK       : " << noDuduk << endl;
    cout << "HARGA 1 TIKET      : Rp." << hargaTiket << endl;
    cout << "DISKON             : Rp." << diskon << endl;
    cout << "TOTAL HARGA        : Rp." << totalHarga - diskon << endl;
    cout << "============================================" << endl;
    cout << "Terima kasih telah menggunakan layanan kami!" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "   Apakah Anda ingin kembali ke menu awal?  " << endl;
    cout << "--------------------------------------------" << endl;
    cout << "    Jika iya tekan 1, jika tidak tekan 0    " << endl;
    cout << "============================================" << endl;
    ulangi:
    cin >> ulangtidak;

switch(ulangtidak){
case 1: system("cls");
            goto menu;
            break;
case 0: return 0;
    default:
    cout << "============================================" << endl;
    cout << "Pilihan tidak valid! Masukkan ulang pilihan\n";
    cout << "============================================" << endl;
    goto ulangi;
    }
}
int hitungdiskon(int totalHarga) {
    int hitdiskon;
    if (totalHarga > 100000) {
    hitdiskon = totalHarga * 0.10;
}   else {
    hitdiskon = 0;
}
    return hitdiskon;
}
