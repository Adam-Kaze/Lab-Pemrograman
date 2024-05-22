#include <iostream>
#include "Barang.h"

using namespace std;

class Keyboard : public Barang {
    // Property dari keyboard
    public :
        string backLight, tipeSwitch;
        int banyakKey;

    // Method
    public :
        // Constructor
        Keyboard ( string namaBarang = "!! Barang Tidak Ada !!", int hargaBarang = 0, int stokBarang = 0, string backLight = "non-backlit", int banyakKey = 0, string tipeSwitch = "linear" ) {  // Nama constructor & destructor di C++ selalu sama dengan nama classnya
            Keyboard::namaBarang = namaBarang;    // Carikan class `Barang` yang didalamnya ada property `namaBarang`
            Keyboard::hargaBarang = hargaBarang;  // Jadi tanda "::" digunakan untuk mencari dan memilih sebuah property global pada class
            Keyboard::stokBarang = stokBarang;
            Keyboard::backLight = backLight;
            Keyboard::banyakKey = banyakKey;
            Keyboard::tipeSwitch = tipeSwitch;
        }

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
};


class Processor : public Barang {
    // Property dari Processor
    public :
        float frekuensiDasar, turboBoost;

    // Method
    public :
        // Constructor
        Processor ( string namaBarang = "!! Barang Tidak Ada !!", int hargaBarang = 0, int stokBarang = 0, float frekuensiDasar = 0, float turboBoost = 0 ) {  // Nama constructor & destructor di C++ selalu sama dengan nama classnya
            Processor::namaBarang = namaBarang;    // Carikan class `Barang` yang didalamnya ada property `namaBarang`
            Processor::hargaBarang = hargaBarang;  // Jadi tanda "::" digunakan untuk mencari dan memilih sebuah property global pada class
            Processor::stokBarang = stokBarang;
            Processor::frekuensiDasar = frekuensiDasar;
            Processor::turboBoost = turboBoost;
        }

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
};