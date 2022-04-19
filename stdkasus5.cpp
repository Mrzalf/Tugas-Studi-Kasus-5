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
  cin >> nim;
  cout << "Masukkan Nama Mahasiswa : ";
  cin >> nama;
  cout << "Masukkan jumlah matakuliah yang mau diambil :";
  cin>>jml_matkul;
  hasil=p.ambil_matkul(jml_matkul);
  total = hasil * biaya;
  diskon = total * 10/100;
  total_biaya1 = total - diskon;
  total_diskon = total_biaya1 * 5/100;
  total_biaya2 = total_biaya1 - total_diskon;
  cout <<"\n\n---------------------------------";
  cout << "\nNIM Mahasiswa              : " << nim;
  cout << "\nNama Mahasiswa             : " << nama;
  cout << "\nJumlah matakuliah yang diambil   : " << jml_matkul;
  cout << "\nJumlah sks yang diambil        : " << hasil;
  cout << "\nTotal biaya              : " << total << endl ;
  cout << "Total biaya setelah di diskon    : " << total_biaya2;
}
int proses::ambil_matkul(int x){
  if (x==0){
    cout << "Jumlah keseluruhan sks : " << hasil;
