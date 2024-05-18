#include <iostream>
using namespace std;

// Class Barang
class Barang {
    // Property / Attribute
    public :
        string namaBarang;
        int hargaBarang, stokBarang;
    // Method / Behavior
    public :
        void tambahStok(int tmbBarang) {
            stokBarang = stokBarang + tmbBarang;
            cout << "\nStok Barang Setelah Ditambahkan =  " << stokBarang << endl;
        }

        void kurangStok(int krgBarang) {
            stokBarang = stokBarang - krgBarang;
            cout << "\nStok Barang Setelah Dikurangkan  =  " << stokBarang << endl;
        }

        bool cekStok() {
            if (stokBarang > 0) {
                return true;
            } else {
                return false;
            }
        }

        void showDataBarang(){
            cout << "\nNama Barang   :  " << namaBarang;
            cout << "\nHarga Barang  :  Rp. " << hargaBarang;
            cout << "\nStok Barang   :  " << stokBarang << " pcs\n";
        }
};