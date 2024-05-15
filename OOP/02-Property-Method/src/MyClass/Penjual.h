#include <iostream>
using namespace std;

// Class Penjual
class Penjual {
    public :
        string namaPenjual, genderPenjual;
        int umurPenjual, lamaKerja;

    public :
        void showDataPenjual(){
            cout << "\nNama Penjual        :  " << namaPenjual;
            cout << "\nUmur Penjual        :  " << umurPenjual << " Tahun";
            cout << "\nGender Penjual      :  " << genderPenjual;
            cout << "\nLama Kerja Penjual  :  " << lamaKerja << " Tahun\n";
        }
};