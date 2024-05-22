#include <iostream>
using namespace std;

// Class Pembeli
class Pembeli {
    public :
        string namaPembeli, noTelp;
        int umurPembeli;
    
    public :
        void showDataPembeli() {
            cout << "\nNama Pembeli          :  " << namaPembeli;
            cout << "\nUmur Pembeli          :  " << umurPembeli << " Tahun";
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