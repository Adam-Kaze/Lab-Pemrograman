#include <iostream>
#include "MyClass/User.h"
#include "MyClass/Penjual.h"
#include "MyClass/Pembeli.h"
#include "MyClass/Accessories.h"
#include "MyClass/Transaksi.h"
using namespace std;

int main() {
  string nama, noTelp;
  int umur, quantity;

  // Instansiasi Object Barang
  cout << "\n!! BARANG !!";
  Keyboard keyboard1("Vortex Series VX 7", 1000000, 97, "RGB", 87, "Outemu Blue");
  Keyboard keyboard2("Keychron K2", 1200000, 27, "RGB", 84, "Gateron Brown");
  Keyboard keyboard3("Rexus Daxa M84 Pro", 1200000, 11, "RGB", 84, "Gateron Red");

  keyboard1.showDataBarang();
  keyboard2.showDataBarang();
  keyboard3.showDataBarang();

  Processor proc1("AMD Ryzen 5 3600", 3000000, 21, 3.6, 4.2);
  Processor proc2("Intel Core i5 10400", 2400000, 17, 2.9, 4.3);

  proc1.showDataBarang();
  proc2.showDataBarang();


  // Instansiasi Object Penjual
  cout << "\n!! PENJUAL !!";
  Penjual penjual1("Ali Bin Abu Thalib", 23, "Pria", 3);
  penjual1.showDataPenjual();


  // Instansiasi Object Pembeli
  Pembeli pembeli1;
  cout << "\n!! PEMBELI !!";

  cout << "\nMasukkan nama pembeli       :  "; getline(cin, nama);
  cout << "\nMasukkan Umur pembeli       :  "; cin >> umur;
  cout << "\nNomor Ponsel pembeli (+62)  :  "; cin >> noTelp;
  cout << "\nJumlah barang yang dibeli   :  "; cin >> quantity;

  pembeli1.setNama(nama);
  pembeli1.setUmur(umur);
  pembeli1.setNoTelp(noTelp);
  pembeli1.showDataPembeli();


  // Menampilkan data transaksi
  Transaksi trs1(&penjual1, &pembeli1, &keyboard1, quantity);

  return 0;
}