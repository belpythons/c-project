#include <iostream>
using namespace std;

int pertambahan(int x, int y) {
    return x + y;
}

int pengurangan(int x, int y) {
    return x - y;
}

int main() {
    int pilihan;
    float tabungan = 50000.00;
    float tarikTunai;
    float addTabungan;
    int pilih;
    int pin;
    string username;

    cout << "\n";
    cout << "====== Bank Mini Indonesia ======\n\n";
    cout << "Selamat datang di Bank Mini. \n";
    cout << "Silahkan Login terlebih dahulu. \n" << endl;
    menu :
    cout << "Masukkan username : ";
    cin >> username;
    cout << "Masukkan Pin : ";
    cin >> pin;
    cout << endl;

    if (username != "zhifah" || pin != 939) {
        cout << "Maaf, username atau Pin anda salah. \n";
        goto menu;
    } else {
        system("cls");
    }

    do {
        cout << "=== Selamat datang " + username + " === \n";
        cout << "Masukkan pilihan anda : \n";
        cout << "1. Cek tabungan. \n";
        cout << "2. Tarik tunai. \n";
        cout << "3. Isi tabungan. \n";
        cin >> pilihan;
        system("cls");

        switch (pilihan) {
            case 1:
                cout << "Tabungan " + username + " sebesar : Rp" << tabungan << endl;
                goto lagi;

            case 2:
                cout << "Tabungan " + username + " sebesar : Rp" << tabungan << endl;
                cout << "Jumlah uang yang ditarik : Rp";
                cin >> tarikTunai;

                if (tarikTunai > tabungan) {
                    cout << "Uang anda tidak cukup."<<endl;
                } else {
                    tabungan = pengurangan(tabungan, tarikTunai);
                    cout << "Silahkan ambil uang anda. \n";
                    cout << "Sisa uang anda sekarang sebesar : Rp" << tabungan << endl;
                }
                goto lagi;

            case 3:
                cout << "Jumlah uang yang ingin ditambahkan : Rp";
                cin >> addTabungan;
                tabungan = pertambahan(tabungan, addTabungan);
                cout << "Tabungan anda sekarang sebesar : Rp" << tabungan << endl;
                goto lagi;

	lagi :
        cout << "1. Lanjut \n";
        cout << "2. Keluar \n";
        cout << "Apakah anda ingin melakukan transaksi lagi ? ";
        cin >> pilih;
	
        if (pilih == 1) {
        system("cls");
    } else if (pilih == 2) {
        cout << "Terimakasih telah menggunakan Bank Mini";
        return 0;
    } else {
        goto lagi;}

            default:
                cout << "Gagal, pilihan tidak sesuai"<< endl;
        }
	}while(pilihan != 3);
    
    return 0;
}

