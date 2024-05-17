#include <iostream>
using namespace std;

// Class Pembeli
class Pembeli {
    public :
        string nama, noTelp;
        int umur;
    
    public :
        // Constructor
        Pembeli ( string nama = "!! Pembeli Tidak Ada !!", int umur = 0, string noTelp = "08xx" ) {
            Pembeli::nama = nama;
            Pembeli::umur = umur;
            Pembeli::noTelp = noTelp;
        }

        // Normal Method
        void showDataPembeli() {
            cout << "\nNama Pembeli          :  " << nama;
            cout << "\nUmur Pembeli          :  " << umur << " Tahun";
            cout << "\nNomor Ponsel Pembeli  :  +62 ";

            for (int i = 0; i < 3; i++) {
                cout << noTelp[i];
            } cout << "-";

            for (int i = 3; i < 7; i++) {
                cout << noTelp[i];
            } cout << "-";

            for (int i = 7; i < 11; i++) {
                cout << noTelp[i];
            } cout << "\n";
        }
};