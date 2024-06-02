#include <iostream>

using namespace std;

class Transaksi {
    public :
        Transaksi( Penjual *penjual, Pembeli *pembeli, Barang *barang, int quantity ) {
            cout << "\nPenjual  :  " << penjual->getNama();
            cout << "\nPembeli  :  " << pembeli->getNama();
            cout << "\nBarang   :  " << barang->showJenisBarang() << barang->getNamaBarang();
            cout << "\nJumlah   :  " << quantity << " buah\n";

            barang->setStokBarang( barang->getStokBarang() - quantity );
        }
};