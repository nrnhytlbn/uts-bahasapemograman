#include <iostream>
using namespace std;

int main() {
int a, b, jumlah, kurang, kali;
float bagi;

cout << "Masukkan Angka pertama : ";
cin >> a;
cout << "Masukkan Angka kedua   : ";
cin >> b;

jumlah = a+b;
cout << "Penjumlahan : " << jumlah << endl;
kurang = a-b;
cout << "Pengurangan : " <<kurang <<endl;
kali = a*b;
cout << "Perkalian   : " << kali << endl;
bagi = a/b;
cout << "Pembagian   : " << bagi << endl;

}
