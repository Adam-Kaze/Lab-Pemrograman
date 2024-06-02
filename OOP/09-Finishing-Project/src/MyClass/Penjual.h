#include <iostream>

using namespace std;

// Class Penjual
class Penjual : public User {
    private :
        string gender;
        int lamaKerja;

    public :
    // Abstract Class
        virtual string tampilJenisUser() {
            return "Penjual ";
        }

    // Constructor
        Penjual( string nama = "!! Penjual Tidak Ada !!", int umur = 0, string gender = "-", int lamaKerja = 0 ) : User( nama, umur ) {
            Penjual::gender = gender;
            Penjual::lamaKerja = lamaKerja;
        }

    // Method Wajib
        void showDataPenjual(){
            User::showDataUser();
            cout << "\nGender Penjual        :  " << Penjual::gender;
            cout << "\nLama Kerja Penjual    :  " << Penjual::lamaKerja << " Tahun\n";
        }

    // Method Setter
        void setGender( int gender ) {
            Penjual::gender = gender;
        }

        void setLamaKerja( int lamaKerja ) {
            Penjual::lamaKerja = lamaKerja;
        }

    // Method Getter
        string getGender() {
            return Penjual::gender;
        }

        int getLamaKerja() {
            return Penjual::lamaKerja;
        }
};