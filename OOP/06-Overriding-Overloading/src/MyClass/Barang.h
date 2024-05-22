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
        // Constructor
    /*
        Constructor adalah method yang pertama kali dijalankan tepat sebelum class tersebut berhasil diintansiasi menjadi sebuah object

        // Ini jika nama property pada class != nama property pada method
        Barang ( string inputNama = "!! Barang Tidak Ada !!", int inputHarga = 0, int inputStok = 0 ) {
            namaBarang = inputNama;
            hargaBarang = inputHarga;
            stokBarang = inputStok;
        }
    */
        // Ini jika nama property pada class == nama property pada method
        Barang ( string namaBarang = "!! Barang Tidak Ada !!", int hargaBarang = 0, int stokBarang = 0 ) {  // Nama constructor & destructor di C++ selalu sama dengan nama classnya
            Barang::namaBarang = namaBarang;    // Carikan class `Barang` yang didalamnya ada property `namaBarang`
            Barang::hargaBarang = hargaBarang;  // Jadi tanda "::" digunakan untuk mencari dan memilih sebuah property global pada class
            Barang::stokBarang = stokBarang;
        }

        // Method Wajib
        void tambahStok() {
            stokBarang++;
            cout << "\nStok Barang Setelah Ditambahkan  =  " << stokBarang << endl;
        }

        void tambahStok( int tmbBarang ) {  // Overloading Method
            stokBarang += tmbBarang;
            cout << "\nStok Barang Setelah Ditambah " << tmbBarang << "  =  " << stokBarang << endl;
        }

        void kurangStok() {
            stokBarang--;
            cout << "\nStok Barang Setelah Dikurangi  =  " << stokBarang << endl;
        }

        void kurangStok( int krgBarang ) {  // Overloading Method
            stokBarang -= krgBarang;
            cout << "\nStok Barang Setelah Dikurang " << krgBarang << "  =  " << stokBarang << endl;
        }

        bool cekStok() {
            if (stokBarang > 0) {
                return true;
            } else {
                return false;
            }
        }

        bool cekStok( bool status ) {   // Overloading Method
            if ( status ) {     // Stok Barang masih ada kan ?
                if (stokBarang > 0) {
                    return true;
                } else {
                    return false;
                }
            } else {                    // Stok Barang udah habis kan ?
                if (stokBarang > 0) {
                    return false;
                } else {
                    return true;
                }
            }
        }

        void showDataBarang(){
            cout << "\nNama Barang   :  " << Barang::namaBarang;
            cout << "\nHarga Barang  :  Rp. " << Barang::hargaBarang;
            cout << "\nStok Barang   :  " << Barang::stokBarang << " pcs";
        }

        // Method Setter
        void setNamaBarang( string namaBarang ) {
            Barang::namaBarang = namaBarang;
        }

        void setHargaBarang( int hargaBarang ) {
            Barang::hargaBarang = hargaBarang;
        }

        void setStokBarang( int stokBarang ) {
            Barang::stokBarang = stokBarang;
        }

        // Method Getter
        string getNamaBarang() {
            return Barang::namaBarang;
        }

        int getHargaBarang() {
            return Barang::hargaBarang;
        }

        int getStokBarang() {
            return Barang::stokBarang;
        }
};