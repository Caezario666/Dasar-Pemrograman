/*
NAMA : CAEZARIO RAFIE ANGGARA Z
NIM  : A11.2022.14608
DASAR PEMOGRAMAN 3
*/

#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    cout << "HAI" << endl;

  int u = 18;
  float t = 178.5;
  char ub = 'L';
  string ubs = "Large";

  cout << "Umur saya: " << u;
  cout << endl;
  cout << "Tinggi badan: " << t;
  cout << endl;
  cout << "Ukuran baju : " << ub;
  cout << endl;
  cout << "Detail ukuran: " << ubs;
  cout << endl;

  int a;
  cout << "\nMasukkan angka: ";
  cin >> a;
  cout << "\nPenjumlahan: " << a + u;
  cout << "\nPengurangan: " << a - u;
  cout << "\nPerkalian: " << a * u;

    return 0;
}
