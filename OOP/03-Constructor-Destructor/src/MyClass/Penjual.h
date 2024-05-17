#include <iostream>
using namespace std;

// Class Penjual
class Penjual {
    public :
        string nama, gender;
        int umur, lamaKerja;

    public :
        // Constructor
        Penjual( string nama = "!! Penjual Tidak Ada !!", int umur = 0, string gender = "-", int lamaKerja = 0 ) {
            Penjual::nama = nama;
            Penjual::umur = umur;
            Penjual::gender = gender;
            Penjual::lamaKerja = lamaKerja;
        }
        // Normal Method
        void showDataPenjual(){
            cout << "\nNama Penjual        :  " << nama;
            cout << "\nUmur Penjual        :  " << umur << " Tahun";
            cout << "\nGender Penjual      :  " << gender;
            cout << "\nLama Kerja Penjual  :  " << lamaKerja << " Tahun\n";
        }
};