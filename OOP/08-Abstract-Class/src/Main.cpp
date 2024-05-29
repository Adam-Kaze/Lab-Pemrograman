#include <iostream>
#include "MyClass/Penjual.h"
#include "MyClass/Pembeli.h"
#include "MyClass/Accessories.h"

using namespace std;

int main() {
  /*
    Abstract Class adalah sebuah kelas yang menjadi cikal bakal para subclassnya. Metode ini digunakan untuk menerapkan efek visibility protected pada sebuah class.
    Class yang dibuat menjadi abstract class tidak dapat menjadi sebuah object, jadi hanya bisa menurunkan sifat-sifatnya pada subclass dan tidak dapat diakses secara public.
    Cara mengubah sebuah class menjadi sebuah absract class adalah dengan menambahkan minimal 1 method abstract (virtual) kedalam class tersebut.
    Setiap abstract method harus di overriding pada setiap subclass tanpa terlewat satupun. Dan abstract method pada abstract class wajib di isi value standarnya.
    Biasanya Valuenya diisi 0 (Mau itu void method, int method, string method, bool method, float method, char method, dll. Diisi dengan value standar 0).
    Dengan ini method `setNamaBarang()` bisa digunakan dan Barang.h tetap tidak bisa diakses public lagi karena sudah menjadi abstract class yang artinya dia tidak dapat dijadikan sebuah object

    Syntax Abstract Method : virtual <Tipe Method> <Nama Method>() = 0;
  */

  string nama, noTelp;
  int umur;

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
  // Penginputan data Pembeli
  cout << "\nMasukkan nama pembeli       :  "; getline(cin, nama);
  cout << "\nMasukkan Umur pembeli       :  "; cin >> umur;
  cout << "\nNomor Ponsel pembeli (+62)  :  "; cin >> noTelp;
  // Pengisian Identitas Pembeli
  pembeli1.setNama(nama);
  pembeli1.setUmur(umur);
  pembeli1.setNoTelp(noTelp);
  // Menampilkan Isi Data Pembeli
  pembeli1.showDataPembeli();

  return 0;
}