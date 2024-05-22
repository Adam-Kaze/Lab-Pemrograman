#include <iostream>
#include "MyClass/Barang.h"
#include "MyClass/Penjual.h"
#include "MyClass/Pembeli.h"

using namespace std;

int main() {
  // Barang dengan parameter default (data parameternya tidak diisi)
  Barang barang1;
  barang1.showDataBarang();
  // Property default tersebut tetap dapat diganti dengan cara berikut
  barang1.namaBarang = "Shampoo 250 ml";
  barang1.hargaBarang = 27000;
  barang1.stokBarang = 20;

  // Barang dengan instansiasi normal (data parameternya diisi selayaknya)
  Barang barang2("Pasta Gigi", 18000, 15);
  barang2.showDataBarang();
  // Memanggil Method Pada object `barang2`
  barang2.tambahStok(5);
  barang2.showDataBarang();
  barang2.kurangStok(10);
  barang2.showDataBarang();

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