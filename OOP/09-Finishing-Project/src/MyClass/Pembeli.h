#include <iostream>

using namespace std;

// Class Pembeli
class Pembeli : public User {
    private :
        string noTelp;

    public :
    // Abstract Class
        virtual string tampilJenisUser() {
            return "Pembeli ";
        }

    // Constructor
        Pembeli ( string nama = "!! Pembeli Tidak Ada !!", int umur = 0, string noTelp = "08xx" ) : User( nama, umur ) {
            Pembeli::noTelp = noTelp;
        }

    // Method Wajib
        void showDataPembeli() {
            User::showDataUser();
            cout << "\nNomor Ponsel Pembeli  :  +62 ";

            for (int i = 0; i < 3; i++) {
                cout << Pembeli::noTelp[i];
            } cout << "-";

            for (int i = 3; i < 7; i++) {
                cout << Pembeli::noTelp[i];
            } cout << "-";

            for (int i = 7; i < 11; i++) {
                cout << Pembeli::noTelp[i];
            } cout << "\n";
        }

    // Setter & Getter
        void setNoTelp (string noTelp) {
            Pembeli::noTelp = noTelp;
        }

        string getNoTelp() {
            return Pembeli::noTelp;
        }
};