#include <iostream>
#include "MyClass/FirstClass.h"   // Include atau menghubungkan atau mengambil data dari file "FirstClass" di folder "MyClass"

using namespace std;

int main() {
  cout << "\nHello Gaes.." << endl;

  // Instansiasi Class -> Objek
  FirstClass objek1;      // Inisialisasinya
  objek1.firstMethod();   // Penggunaanya

  cin.get();
  return 0;
}