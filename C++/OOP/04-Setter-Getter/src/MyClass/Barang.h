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
        void tambahStok( int tmbBarang ) {
            stokBarang = stokBarang + tmbBarang;
            cout << "\nStok Barang Setelah Ditambahkan " << tmbBarang << "  =  " << stokBarang << endl;
        }

        void kurangStok( int krgBarang ) {
            stokBarang = stokBarang - krgBarang;
            cout << "\nStok Barang Setelah Dikurangkan " << krgBarang << "  =  " << stokBarang << endl;
        }

        bool cekStok() {
            if (stokBarang > 0) {
                return true;
            } else {
                return false;
            }
        }

        void showDataBarang(){
            cout << "\nNama Barang   :  " << Barang::namaBarang;
            cout << "\nHarga Barang  :  Rp. " << Barang::hargaBarang;
            cout << "\nStok Barang   :  " << Barang::stokBarang << " pcs\n";
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