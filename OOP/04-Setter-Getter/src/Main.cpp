#include <iostream>
#include "MyClass/Barang.h"
#include "MyClass/Penjual.h"
#include "MyClass/Pembeli.h"

using namespace std;

int main() {
  // Barang dengan parameter default (data parameternya tidak diisi)
  Barang barang1;
  barang1.showDataBarang();

  // Barang dengan instansiasi normal (data parameternya diisi selayaknya)
  Barang barang2("Pasta Gigi", 18000, 15);
  barang2.showDataBarang();
  // Mengakses dan menggunakan method setter untuk mengganti property object
  barang2.setNamaBarang("Odol");
  barang2.setHargaBarang(19000);
  barang2.showDataBarang();
  // Mengakses dan menggunakan method Getter untuk mengganti property object
  cout << "\nNama Barang   :  " << barang2.getNamaBarang();
  cout << "\nHarga Barang  :  Rp. " << barang2.getHargaBarang();

  // Fungsi dari setter & getter untuk menyembunyikan nama property beserta nilainya,
  // agar tidak gampang diubah oleh peretas atau orang lain (Untuk menjaga keamanan source code)

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