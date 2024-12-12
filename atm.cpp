#include <iostream>
#include <iomanip>
using namespace std;

class Account {
private:
    string username;
    string password;
    double balance;

public:
    Account(string user, string pass, double saldorek)
        : username(user), password(pass), balance(saldorek) {}

    bool login(string user, string pass) {
        if (username == user && password == pass) {
            cout << "-=-=Login Berhasil=-=-\n";
            return true;
        } else {
            cout << "-=-=Login Gagal=-=-\n";
            return false;
        }
    }

    void loginUser() {
        bool loggedIn = false;

        do {
            cout << "=======Login=======\n";
            cout << "Username : ";
            string user;
            cin >> user;
            cout << "Password : ";
            string pass;
            cin >> pass;
            cout << endl;

            loggedIn = login(user, pass);
        } while (!loggedIn);
    }

    void menu() {
        cout << endl;
        cout << "=======Menu=======\n";
        cout << "1.Tarik Saldo\n";
        cout << "2.Cek Saldo\n";
        cout << "3.Masukkan Saldo\n";
        cout << "4.Exit\n";
    }

    void TarikSaldo(double amount) {
        if (amount >= 0 && balance >= amount) {
            balance -= amount;
            cout << "Saldo anda sekarang adalah $" << fixed << setprecision(2) << balance << endl;
        } else {
            cout << "Saldo anda tidak cukup atau jumlah tarikan tidak valid\n";
        }
    }

    void CekSaldo() {
        cout << "Sisa saldo = $ " << fixed << setprecision(2) << balance << endl;
    }

    void KirimSaldo(double amount) {
        if (amount >= 0) {
            balance += amount;
            cout << "Total saldo anda sekarang adalah $" << fixed << setprecision(2) << balance << endl;
        } else {
            cout << "Saldo tidak valid, silahkan coba lagi\n";
        }
    }
};

int main() {
    int choice;
    Account myAccount("202312066", "123", 1000.0);
    myAccount.loginUser();

    do {
        myAccount.menu();
        cout << "==================\n";
        cout << "Pilih [1/2/3/4] : ";
        cin >> choice;

        switch (choice) {
            case 1:
                double saldoT;
                cout << "Tarik saldo : $";
                cin >> saldoT;
                myAccount.TarikSaldo(saldoT);
                break;
            case 2:
                myAccount.CekSaldo();
                break;
            case 3:
                double saldoK;
                cout << "Masukkan saldo : $";
                cin >> saldoK;
                myAccount.KirimSaldo(saldoK);
                break;
            case 4:
                cout << "Terima kasih sudah menggunakan ATM";
                return 0;
            default:
                cout << "Pilihan menu yang anda pilih tidak ada,\n";
                cout << "Silahkan masukkan pilihan yang anda inginkan dengan benar\n";
        }
    } while (choice != 4);

    return 0;
}

