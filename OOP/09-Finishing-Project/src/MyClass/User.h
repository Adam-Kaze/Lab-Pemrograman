#include <iostream>

using namespace std;

// Class User
class User {
    private :
        string nama;
        int umur;

    public :
    // Abstract Class
        virtual string tampilJenisUser() = 0;
    // Constructor
        User ( string nama = "!! Tidak Ada Nama !!", int umur = 0 ) {
            User::nama = nama;
            User::umur = umur;
        }
    // Mandatory Method
        void showDataUser(){
            cout << "\nNama User             :  " << User::nama;
            cout << "\nUmur User             :  " << User::umur << " Tahun";
        }
    // Method Setter
        void setNama( string nama ) {
            User::nama = nama;
        }

        void setUmur( int umur ) {
            User::umur = umur;
        }
    // Method Getter
        string getNama() {
            return User::nama;
        }

        int getumur() {
            return User::umur;
        }
};