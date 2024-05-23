#include <iostream>
#include "Barang.h"

using namespace std;

class Keyboard : public Barang {
    // Property dari keyboard
    private :
        string backLight, tipeSwitch;
        int banyakKey;

    // Method
    public :
        // Overriding Constructor
        Keyboard ( string namaBarang = "!! Barang Tidak Ada !!", int hargaBarang = 0, int stokBarang = 0, string backLight = "non-backlit", int banyakKey = 0, string tipeSwitch = "linear" ) : Barang(namaBarang, hargaBarang, stokBarang) {
            Keyboard::backLight = backLight;
            Keyboard::banyakKey = banyakKey;
            Keyboard::tipeSwitch = tipeSwitch;
        }   // Tanda ":" digunakan untuk memanggil constructor dari class parentnya

        // Setter & Getter
        void setBackLight( string backLight ) {
            Keyboard::backLight = backLight;
        }
        string getBackLight() {
            return Keyboard::backLight;
        }

        void setBanyakKey( int banyakKey ) {
            Keyboard::banyakKey = banyakKey;
        }
        int getBanyakKey() {
            return Keyboard::banyakKey;
        }

        void setTipeSwitch( string tipeSwitch ) {
            Keyboard::tipeSwitch = tipeSwitch;
        }
        string getTipeSwitch() {
            return Keyboard::tipeSwitch;
        }

        // Overriding Method `showDataBarang`
        void showDataBarang(){
            Barang::showDataBarang();
            cout << "\nBacklight     :  " << Keyboard::backLight;
            cout << "\nBanyak Keys   :  " << Keyboard::banyakKey << " Key";
            cout << "\nTipe Switch   :  " << Keyboard::tipeSwitch << " Switch\n";
        }
};


class Processor : public Barang {
    // Property dari Processor
    public :
        float frekuensiDasar, turboBoost;

    // Method
    public :
        // Overriding Constructor
        Processor ( string namaBarang = "!! Barang Tidak Ada !!", int hargaBarang = 0, int stokBarang = 0, float frekuensiDasar = 0, float turboBoost = 0 ) : Barang(namaBarang, hargaBarang, stokBarang) {
            Processor::frekuensiDasar = frekuensiDasar;
            Processor::turboBoost = turboBoost;
        }   // Tanda ":" digunakan untuk memanggil constructor dari class parentnya

        // Setter & Getter
        void setFrekuensiDasar( float frekuensiDasar ) {
            Processor::frekuensiDasar = frekuensiDasar;
        }
        float getFrekuensiDasar() {
            return Processor::frekuensiDasar;
        }

        void setTurboBoost( float turboBoost ) {
            Processor::turboBoost = turboBoost;
        }
        float getTurboBoost() {
            return Processor::turboBoost;
        }

        // Overriding Method `showDataBarang`
        void showDataBarang(){
            Barang::showDataBarang();
            cout << "\nBase Clock    :  " << Processor::frekuensiDasar << " GHz";
            cout << "\nTurbo Boost   :  Up to " << Processor::turboBoost << " GHz\n";
        }
};