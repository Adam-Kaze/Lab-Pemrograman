#include <iostream>
using namespace std;

// Class Penjual
class Penjual {
    private :
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
        // Method Wajib
        void showDataPenjual(){
            cout << "\nNama Penjual        :  " << Penjual::nama;
            cout << "\nUmur Penjual        :  " << Penjual::umur << " Tahun";
            cout << "\nGender Penjual      :  " << Penjual::gender;
            cout << "\nLama Kerja Penjual  :  " << Penjual::lamaKerja << " Tahun\n";
        }

        // Method Setter
        void setNamaPenjual( string nama ) {
            Penjual::nama = nama;
        }

        void setUmurPenjual( int umur ) {
            Penjual::umur = umur;
        }

        void setGenderPenjual( int gender ) {
            Penjual::gender = gender;
        }

        void setLamaKerja( int lamaKerja ) {
            Penjual::lamaKerja = lamaKerja;
        }

        // Method Getter
        string getNamaPenjual() {
            return Penjual::nama;
        }

        int getumurPenjual() {
            return Penjual::umur;
        }

        string getGenderPenjual() {
            return Penjual::gender;
        }

        int getLamaKerja() {
            return Penjual::lamaKerja;
        }
};