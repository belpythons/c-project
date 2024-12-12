#include <iostream>
#include <string>
using namespace std;
char lagi;
float Average(float pancasila, float kalkulus, float logika, float pemrograman, float wastek, float inggris) 
{
    return (pancasila + kalkulus + logika + pemrograman + wastek + inggris) / 6;
}

string Grade(float ipk) {
    if (ipk >= 75) {
        return "A";
    } else if (ipk >= 50) {
        return "B";
    } else if (ipk > 25) {
        return "C";
    } else {
        return "D";
    }
}

int main() {
    float pancasila, kalkulus, logika, pemrograman, wastek, inggris, semester, rata_rata;
    double ipk;
    string nama;
	
	ulang:
		system ("cls");
    cout << "Sebutkan nama kalian: " << endl;
    getline(cin, nama);
    	cin.ignore();
    cout << "Sudah semester berapa?" << endl;
    cin >> semester;
    cout << "Masukan nilai pancasila: ";
    cin >> pancasila;
    cout << "Masukan nilai kalkulus: ";
    cin >> kalkulus;
    cout << "Masukan nilai logika: ";
    cin >> logika;
    cout << "Masukan nilai pemrograman: ";
    cin >> pemrograman;
    cout << "Masukan nilai wastek: ";
    cin >> wastek;
    cout << "Masukan nilai inggris: ";
    cin >> inggris;
    
	system ("cls");
    cout << "Biodata mahasiswa" << endl << endl;
    cout << "Halo " << nama << " mahasiswa semester " << semester << endl;
    cout << "Silahkan dilihat rekapan nilai anda" << endl;
    cout << pancasila << endl << kalkulus << endl << logika << endl << pemrograman << endl << wastek << endl << inggris << endl << endl;

    rata_rata = Average(pancasila, kalkulus, logika, pemrograman, wastek, inggris);

    cout << "Rata-rata nilai semester ini: " << rata_rata << endl;
    cout << "IPK anda adalah: " << Grade(rata_rata) << endl;
    
    menulagi:
		cout<<"anda ingin mengisi ipk lagi (y/t) ?";
		cin>>lagi;
        if(lagi=='y' || lagi=='Y')
		{goto ulang;} 
		else if(lagi=='t' || lagi=='T')
		{goto selesai;} 
		else
        {cout<<"pengisian anda salah !!!" << endl ;goto menulagi;}
    selesai :
    	system ("cls");
        cout<<"terimakasih telah menggunakan layanan c++";
    return 0;
}

