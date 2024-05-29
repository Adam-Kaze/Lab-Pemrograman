#include <iostream>
using namespace std;

// Class Pembeli
class Pembeli {
    private :
        string nama, noTelp;
        int umur;
    
    public :
        // Constructor
        Pembeli ( string nama = "!! Pembeli Tidak Ada !!", int umur = 0, string noTelp = "08xx" ) {
            Pembeli::nama = nama;
            Pembeli::umur = umur;
            Pembeli::noTelp = noTelp;
        }

        // Method Wajib
        void showDataPembeli() {
            cout << "\nNama Pembeli          :  " << Pembeli::nama;
            cout << "\nUmur Pembeli          :  " << Pembeli::umur << " Tahun";
            cout << "\nNomor Ponsel Pembeli  :  +62 ";

            for (int i = 0; i < 3; i++) {
                cout << Pembeli::noTelp[i];
            } cout << "-";

            for (int i = 3; i < 7; i++) {
                cout << Pembeli::noTelp[i];
            } cout << "-";

            for (int i = 7; i < 11; i++) {
                cout << Pembeli::noTelp[i];
            } cout << "\n";
        }

        // Setter & Getter

        void setNama (string nama) {
            Pembeli::nama = nama;
        }

        string getNama() {
            return Pembeli::nama;
        }

        void setUmur (int umur) {
            Pembeli::umur = umur;
        }

        int getUmur() {
            return Pembeli::umur;
        }

        void setNoTelp (string noTelp) {
            Pembeli::noTelp = noTelp;
        }

        string getNoTelp() {
            return Pembeli::noTelp;
        }
};