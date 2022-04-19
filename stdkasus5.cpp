#include <iostream>
using namespace std;

class proses{
public: 
    int ambil_matkul(int x);
    void hitung(); 
   
private:
 
  int sks,total,diskon,total_biaya1,total_biaya2,total_diskon,pembayaran;
  int jml_matkul;
  int biaya = 120000;
  int hasil=0;
  string matkul;
  char nim[10],nama[50];
};  

void proses::hitung(){
  
  proses p;
  cout << "Masukkan NIM Mahasiswa : ";