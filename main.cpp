#include <iostream>
#include <vector>

using namespace std;

struct Motor {
  string merek;
  string model;
  string warna;
  long harga;
};

vector<Motor> daftarMotor{
  {"Yamaha", " R25 ", "Merah", 40000000},
  {"Honda ", "CBR ", "Hitam ", 30000000},
  {"Suzuki", " GSX ", "Biru ", 37000000},
};

void prosesPembelian(Motor motor) {
  int jumlahMotor, total;

  cout << "======== Rincian Pembelian ========\n\n";
  cout << "Motor \t\t : " << motor.merek << motor.model << motor.warna << "~ Rp " << motor.harga << "\n";
  cout << "Jumlah \t\t : "; cin >> jumlahMotor;

  total = motor.harga * jumlahMotor;
  cout << "Total \t\t : Rp " << motor.harga * jumlahMotor << "\n";
}

int main() {
  int nomorMotor, pilih;

  mainMenu:

  system("cls");

  cout << " =================================================== \n";
  cout << " ================ Dealer RGA Motor  ================ \n";
  cout << " =================================================== \n\n";

  cout << "\nDaftar Motor :  ";
  for (int i = 0; i < daftarMotor.size(); i++) {
    cout << (i == 0 ? "" : "\t\t")  << i + 1 << ". " << daftarMotor[i].merek << daftarMotor[i].model << daftarMotor[i].warna << " : Rp " << daftarMotor[i].harga << "\n";
  }

  cout << "\nPilih motor (1 - " << daftarMotor.size() << ") : "; 
  cin >> nomorMotor;

  system("cls");

    if (nomorMotor > 0 && nomorMotor <= daftarMotor.size()) {
    prosesPembelian(daftarMotor[nomorMotor - 1]);
  } else {
    cout << "Tidak ada pilihan produk! \n";
  }

  menu:

  cout << "\nKetik 1 untuk kembali ke main menu \n";
  cout << "Ketik 2 untuk keluar dari aplikasi \n";
  cout << "Pilih  : ";
  cin >> pilih;

  if (pilih == 1){
    goto mainMenu;
  } else if (pilih == 2) {
    cout << " \n===============- Terima Kasih -===============\n";
  } else {
    cout << "======= Tidak ada pilihan tersebut =======\n";
    goto menu;
  }

  system("cls");

}