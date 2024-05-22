#include <iostream>
#include "MyClass/Barang.h"
#include "MyClass/Penjual.h"
#include "MyClass/Pembeli.h"

using namespace std;

int main() {
  // Instansiasi Object Barang
  Barang barang1;

  // Mengakses Property Barang Pada Class
  barang1.namaBarang = "Shampoo 250 ml";
  barang1.hargaBarang = 27000;
  barang1.stokBarang = 20;

  cout << "\nNama Barang   :  " << barang1.namaBarang;
  cout << "\nHarga Barang  :  " << barang1.hargaBarang;
  cout << "\nStok Barang   :  " << barang1.stokBarang << endl;

  // Memanggil Method Pada Class
  barang1.tambahStok(5);
  barang1.kurangStok(10);
  barang1.showDataBarang();


  // Instansiasi Object Penjual
  Penjual penjual1;

  penjual1.namaPenjual = "Ali Bin Abu Thalib";
  penjual1.umurPenjual = 23;
  penjual1.genderPenjual = "Pria";
  penjual1.lamaKerja = 3;

  penjual1.showDataPenjual();


  // Instansiasi Object Pembeli
  Pembeli pembeli1;

  cout << "\nMasukkan nama pembeli       :  "; getline(cin, pembeli1.namaPembeli);
  cout << "\nMasukkan Umur pembeli       :  "; cin >> pembeli1.umurPembeli;
  cout << "\nNomor Ponsel pembeli (+62)  :  "; cin >> pembeli1.noTelp;

  pembeli1.showDataPembeli();


  return 0;
}