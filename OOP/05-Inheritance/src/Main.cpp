#include <iostream>
#include "MyClass/Penjual.h"
#include "MyClass/Pembeli.h"
#include "MyClass/Accessories.h"

using namespace std;

int main() {
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
  Penjual penjual1("Ali Bin Abu Thalib", 23, "Pria", 3);
  penjual1.showDataPenjual();

  // Instansiasi Object Pembeli
  Pembeli pembeli1;
  // Pengisian Identitas Pembeli
  cout << "\nMasukkan nama pembeli       :  "; getline(cin, pembeli1.nama);
  cout << "\nMasukkan Umur pembeli       :  "; cin >> pembeli1.umur;
  cout << "\nNomor Ponsel pembeli (+62)  :  "; cin >> pembeli1.noTelp;
  pembeli1.showDataPembeli();
  
  return 0;
}